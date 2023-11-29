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
    this->_type = src._type;
    this->_brain = new Brain();
    for (int i = 0; i < 100; i++)
    {
            this->_brain->setIdea(src._brain->getIdea(i));
    }
    
}

Cat &Cat::operator=(const Cat &rhs)
{
    std::cout << "Assignation operator CAT called" << std::endl;
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

void    Cat::makeSound() const
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