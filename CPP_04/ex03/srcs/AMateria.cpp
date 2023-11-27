#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria::AMateria()" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
    this->_type = type;
}

AMateria::~AMateria()
{
    std::cout << "AMateria::~AMateria()" << std::endl;
}

AMateria::AMateria(const AMateria &src)
{
    std::cout << "AMateria::AMateria(const AMateria &src)" << std::endl;
    *this = src;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
    std::cout << "AMateria::operator=(const AMateria &rhs)" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

