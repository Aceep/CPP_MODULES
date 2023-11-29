#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Constructor Cat called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Destructor Cat called" << std::endl;
}

Cat::Cat(const Cat &src)
{
    *this = src;
}

Cat &Cat::operator=(const Cat &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}