#include "lib.h"
#include <iostream>

namespace network
{
    template <typename I>
    void bind(char const *ip, unsigned port)
    {
        std::puts(__PRETTY_FUNCTION__);
    }

    template void bind<flags::IPv4>(char const *ip, unsigned port);
    template void bind<flags::IPv6>(char const *ip, unsigned port);
} // namespace network