#include "greeter_impl.hpp"

#include "spdlog/spdlog.h"

namespace greeter
{
Greeter::Greeter() : total(0)
{
}

Greeter::~Greeter()
{
}

size_t Greeter::greet(const absl::string_view& name)
{
    spdlog::info("Hola {}!", name);

    {
        absl::WriterMutexLock lock(&totalMutex);
        total++;
    }

    return name.length();
}

size_t Greeter::totalGreeted() const
{
    size_t temp;

    {
        absl::ReaderMutexLock lock(&totalMutex);
        temp = total;
    }

    return temp;
}
} // namespace greeter
