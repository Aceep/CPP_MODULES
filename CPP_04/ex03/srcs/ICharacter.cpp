#include "ICharacter.hpp"

ICharacter::ICharacter()
{
    std::cout << "ICharacter::ICharacter()" << std::endl;
}

ICharacter::~ICharacter()
{
    std::cout << "ICharacter::~ICharacter()" << std::endl;
}

ICharacter::ICharacter(const ICharacter &src)
{
    std::cout << "ICharacter::ICharacter(const ICharacter &src)" << std::endl;
    *this = src;
}

ICharacter &ICharacter::operator=(const ICharacter &rhs)
{
    std::cout << "ICharacter::operator=(const ICharacter &rhs)" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
    }
    return *this;
}

const std::string &ICharacter::getName() const
{
    //std::cout << "ICharacter::getName()" << std::endl;
    return this->_name;
}

