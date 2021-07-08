#include "greeter.hpp"

#include "httplib.h"

int main(int argc, char** argv)
{
    greeter::Greeter g;

    httplib::Server server;
    server.Get("/",  [&](const httplib::Request& request, httplib::Response& response)
    {
        g.greet("/");
        response.set_content("greeter", "text/plain");
    });

    server.listen("localhost", 1234);

    return 0;
}
