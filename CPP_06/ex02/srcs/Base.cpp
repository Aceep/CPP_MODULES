#include "Base.hpp"
#include "Class.hpp"

Base::~Base()
{
    return;
}

Base *generate(void)
{
    srand(time(NULL));
    int     random = rand() % 3;
    switch (random)
    {
    case 0:
        return (new A());
        break;
    case 1:
        return (new B());
        break;
    case 2:
        return (new C());
        break;
    default:
        return(0);
        break;
    }
}

void identify(Base *p)
{
    std::cout << "identify from pointer" << std::endl;
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;    
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    std::cout << "identify from reference" << std::endl;
    try {
        p = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
    }
    catch (const std::exception& e)
    {
        try {
            p = dynamic_cast<B &>(p);
            std::cout << "B" << std::endl;
        }
        catch (const std::exception& e){
            std::cout << "C" << std::endl;
        }
    }
}