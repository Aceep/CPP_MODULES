#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << this->_name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "ClapTrap " << this->_name << " is born by copy!" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoints == 0)
        return ((void)(std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl));
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_hitPoints << " points of damage!" << std::endl;
    this->_energyPoints --;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints == 0)
        return ((void)(std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl));
    std::cout << "ClapTrap " << this->_name << " is repaired by " << amount << " points!" << std::endl;
    this->_energyPoints --;
}
