#include "Serializer.hpp"

int main()
{
    Data    p;

    p.number = 42;    
    std::cout << &p << std::endl;

    uintptr_t   raw = Serializer::serialize(&p);
    std::cout << raw << std::endl;

    Data    *p2 = Serializer::deserialize(raw);
    std::cout << p2 << std::endl;

    return 0;
}