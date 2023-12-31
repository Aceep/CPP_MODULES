#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "default constructor animal called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "default destructor animal called" << std::endl;
}

Animal::Animal(std::string type)
{
    this->_type = type;
    std::cout << "Construtor type of animal called" << std::endl; 
}

Animal::Animal(const Animal &src)
{
    std::cout << "Copy constructor animal called" << std::endl;
    *this = src;
}

Animal &Animal::operator=(const Animal &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return (*this);
}

void    Animal::makeSound()
{
    std::cout << "Animal make sound" << std::endl;
}

