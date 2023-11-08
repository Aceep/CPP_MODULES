#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "default constructor animal called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "default destructor called" << std::endl;
}

Animal::Animal(std::string type)
{
    this->_type = type;
    std::cout << "construtor type of animal called" << std::endl; 
}

Animal::Animal(const Animal &src)
{

}

Animal &Animal::operator=(const Animal &rhs)
{

}

void    Animal::makeSound()
{

}