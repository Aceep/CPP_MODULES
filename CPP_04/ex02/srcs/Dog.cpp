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
    this->_type = src._type;
    this->_brain = new Brain();
    for (int i = 0; i < 100; i++)
    {
            this->_brain->setIdea(src._brain->getIdea(i));
    }
    
}

Dog &Dog::operator=(const Dog &rhs)
{
    std::cout << "Assignation operator Dog called" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
        this->_brain = new Brain();
        for (int i = 0; i < 100; i++)
        {
            this->_brain->setIdea(rhs._brain->getIdea(i));
        }
    }
    return (*this);
}

void    Dog::makeSound() const
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