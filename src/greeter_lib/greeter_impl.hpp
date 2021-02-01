#ifndef __GREETER_IMPL_HPP__
#define __GREETER_IMPL_HPP__

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
