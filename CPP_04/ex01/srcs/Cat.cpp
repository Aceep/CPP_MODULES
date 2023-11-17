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
    std::cout << "Copy constructor Cat called" << std::endl;
    *this = src;
}

Cat &Cat::operator=(const Cat &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
        *this->_brain = *(rhs._brain);
    }
    return (*this);
}

void    Cat::makeSound()
{
    std::cout << "Meow" << std::endl;
}

std::string   Cat::getBrain(int i) const
{
    return (dynamic_cast<Brain *>(this->_brain)->getIdea(i));
}

void   Cat::setIdea(std::string id)
{
    dynamic_cast<Brain *>(this->_brain)->setIdea(id);
}