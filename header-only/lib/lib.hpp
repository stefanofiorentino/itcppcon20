#pragma once
#include <iostream>

namespace network
{
    namespace flags
    {
        struct IPv4{};
        struct IPv6{};
    } // namespace flags

    template <typename I>
    inline void bind(char const *ip, unsigned port)
    {
        std::puts(__PRETTY_FUNCTION__);
    }
} // namespace network