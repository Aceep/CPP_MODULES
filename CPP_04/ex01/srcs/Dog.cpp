#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog")
{
    this->_brain = new Brain();
    std::cout << "Constructor Dog called" << std::endl;
}

Dog::~Dog()
{
    delete this->_brain;
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

void    Dog::makeSound()
{
    std::cout << "Woof" << std::endl;
}

Brain   *Dog::getBrain()
{
    return (this->_brain);
}