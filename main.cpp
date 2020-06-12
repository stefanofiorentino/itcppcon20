#include <lib/lib.hpp>

int main()
{
    using namespace network;
    bind<flags::IPv4>("127.0.0.1", 4242);
    bind<flags::IPv6>("::1", 4242);
    return 0;
}