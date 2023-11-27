#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    //std::cout << "Ice::Ice()" << std::endl;
}

Ice::~Ice()
{
    //std::cout << "Ice::~Ice()" << std::endl;
}

Ice::Ice(const Ice &src)
{
    //std::cout << "Ice::Ice(const Ice &src)" << std::endl;
    *this = src;
}

Ice &Ice::operator=(const Ice &rhs)
{
    //std::cout << "Ice::operator=(const Ice &rhs)" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

AMateria* Ice::clone() const
{
    //std::cout << "Ice::clone()" << std::endl;
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    //std::cout << "Ice::use(ICharacter& target)" << std::endl;
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}