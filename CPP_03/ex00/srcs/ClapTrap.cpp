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

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
    std::cout << "ClapTrap " << this->_name << " is born by operator!" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_hitPoints == 0)
        return;
    if (this->_energyPoints == 0)
        return ((void)(std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl));
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints --;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints == 0)
        return;
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
    if (this->_hitPoints - amount <= 0)
        return ((void)(std::cout << "ClapTrap " << this->_name << " has no more hitPoints" << std::endl), (void)(this->_hitPoints = 0));
    else
        return ((void)(this->_hitPoints -= amount), (void)(std::cout << "ClapTrap " << this->_name << " has " << this->_hitPoints << " hit points left!" << std::endl));
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints == 0)
        return;
    if (this->_energyPoints == 0)
        return ((void)(std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl));
    std::cout << "ClapTrap " << this->_name << " is repaired by " << amount << " points!" << std::endl;
    this->_energyPoints --;
}

int ClapTrap::getHitPoints() const
{
    return (this->_hitPoints);
}
