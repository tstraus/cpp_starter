#include "greeter.h"
#include "absl/strings/string_view.h"
#include "greeter_impl.hpp"

void* greeter_new()
{
    return reinterpret_cast<void*>(new greeter::Greeter());
}

void greeter_free(void* context)
{
    if (context != nullptr)
    {
        delete reinterpret_cast<greeter::Greeter*>(context);
        context = nullptr;
    }
}

size_t greeter_greet(void* context, const char* name)
{
    return reinterpret_cast<greeter::Greeter*>(context)->greet(absl::string_view(name));
}

size_t greeter_total_greeted(void* context)
{
    return reinterpret_cast<greeter::Greeter*>(context)->totalGreeted();
}
