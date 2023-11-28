#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "Default constructor of ScavTrap called for " << this->_name << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "Constructor of ScavTrap called for " << this->_name << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor of ScavTrap called for " << this->_name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
    std::cout << "Copy constructor of ScavTrap called for " << this->_name << std::endl;
    *this = src;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    if (this != &src)
    {
        this->_name = src._name;
        this->_hitPoints = src._hitPoints;
        this->_energyPoints = src._energyPoints;
        this->_attackDamage = src._attackDamage;
    }
    return (*this);
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap "  << this->_name << " has enterred in Gate keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_hitPoints == 0)
        return;
    if (this->_energyPoints == 0)
        return ((void)(std::cout << "ScavTrap " << this->_name << " is out of energy!" << std::endl));
    std::cout << "ScavTrap " << this->_name << " attacks with his own fonction " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints --;
}