#include "Base.hpp"
#include "Class.hpp"

int main()
{
    Base *first = generate();

    identify(first);
    identify(*first);

    Base *second = NULL;

    identify(second);
    identify(*second);

    delete second;
    delete first;
    return 0;
}