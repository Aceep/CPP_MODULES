#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    //std::cout << "Cure::Cure()" << std::endl;
}

Cure::~Cure()
{
    //std::cout << "Cure::~Cure()" << std::endl;
}

Cure::Cure(const Cure &src)
{
    //std::cout << "Cure::Cure(const Cure &src)" << std::endl;
    *this = src;
}

Cure &Cure::operator=(const Cure &rhs)
{
    //std::cout << "Cure::operator=(const Cure &rhs)" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

AMateria *Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
    //std::cout << "Cure::use(ICharacter& target)" << std::endl;
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}