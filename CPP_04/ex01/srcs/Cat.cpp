#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal("Cat")
{
    this->_brain = new Brain();
    std::cout << "Constructor Cat called" << std::endl;
}

Cat::~Cat()
{
    delete this->_brain;
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

void    Cat::makeSound()
{
    std::cout << "Meow" << std::endl;
}

Brain   *Cat::getBrain()
{
    return (this->_brain);
}