#ifndef GREETER_H
#define GREETER_H

#include <cstddef>

#if defined(_WIN32)
#define EXPORT __declspec(dllexport)
#else
#define EXPORT __attribute__((visibility("default")))
#endif

extern "C"
{
    EXPORT void* greeter_new();

    EXPORT void greeter_free(void* context);

    EXPORT size_t greeter_greet(void* context, const char* name);

    EXPORT size_t greeter_total_greeted(void* context);
}

#endif // __GREETER_H__
