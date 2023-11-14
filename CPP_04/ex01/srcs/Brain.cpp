#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Constructor Brain called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Destructor Brain called" << std::endl;
}

Brain::Brain(const Brain &src)
{
    *this = src;
}

Brain &Brain::operator=(const Brain &rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
        {
            this->_ideas[i] = rhs._ideas[i];
        }
    }
    return (*this);
}

void    Brain::setIdea(std::string idea)
{
    for (int i = 0; i < 100; i++)
    {
        this->_ideas[i] = idea + std::to_string(i);
    }
}

std::string Brain::getIdea(int index) const
{
    return (this->_ideas[index]);
}