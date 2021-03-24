#ifndef GREETER_IMPL_HPP
#define GREETER_IMPL_HPP

#include "absl/strings/string_view.h"
#include "absl/synchronization/mutex.h"

namespace greeter
{
class Greeter
{
  public:
    Greeter();
    ~Greeter();

    size_t greet(const absl::string_view& name);

    size_t totalGreeted() const;

  private:
    mutable absl::Mutex totalMutex;
    size_t total;
};
} // namespace greeter

#endif // __GREETER_IMPL_HPP__
