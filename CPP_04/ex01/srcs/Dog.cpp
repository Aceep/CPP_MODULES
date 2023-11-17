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
    std::cout << "Copy constructor Dog called" << std::endl;
    *this = src;
}

Dog &Dog::operator=(const Dog &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
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

std::string   Dog::getBrain(int i) const
{
    return (dynamic_cast<Brain *>(this->_brain)->getIdea(i));
}

void   Dog::setIdea(std::string id)
{
    dynamic_cast<Brain *>(this->_brain)->setIdea(id);
}