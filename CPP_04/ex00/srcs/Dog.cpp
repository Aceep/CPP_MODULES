#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Constructor Dog called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destructor Dog called" << std::endl;
}

Dog::Dog(const Dog &src)
{
    *this = src;
}

Dog &Dog::operator=(const Dog &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}