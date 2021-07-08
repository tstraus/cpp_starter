#include "greeter_impl.hpp"

#include "spdlog/spdlog.h"
#include "entt/entt.hpp"

namespace greeter
{
Greeter::Greeter() : total(0)
{
    entt::registry reg;
}

Greeter::~Greeter() = default;

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
