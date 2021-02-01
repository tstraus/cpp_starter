#include "greeter_impl.hpp"

#include "absl/flags/flag.h"
#include "absl/flags/parse.h"
#include "absl/flags/usage.h"

ABSL_FLAG(std::string, name, "Margot", "The person to be greeted");

int main(int argc, char** argv)
{
    absl::SetProgramUsageMessage("I'll say hello to anyone you want");
    absl::ParseCommandLine(argc, argv);
    const auto name = absl::GetFlag(FLAGS_name);

    greeter::Greeter g;
    g.greet(name);

    return 0;
}
