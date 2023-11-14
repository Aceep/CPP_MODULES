#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Constructor WrongAnimal called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    this->_type = type;
    std::cout << "Constructor type of WrongAnimal called" << std::endl; 
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    *this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return (*this);
}

void    WrongAnimal::makeSound()
{
    std::cout << "WrongAnimal make sound" << std::endl;
}