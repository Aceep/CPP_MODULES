#include "Base.hpp"
#include "Class.hpp"

int main()
{
    Base *first = generate();

    identify(first);
    identify(*first);

    delete first;
    return 0;
}