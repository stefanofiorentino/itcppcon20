#pragma once

namespace network
{
    namespace flags
    {
        struct IPv4{};
        struct IPv6{};
    } // namespace flags

    template <typename I>
    void bind(char const *ip, unsigned port);

    extern template void bind<flags::IPv4>(char const *ip, unsigned port);
    extern template void bind<flags::IPv6>(char const *ip, unsigned port);
} // namespace network