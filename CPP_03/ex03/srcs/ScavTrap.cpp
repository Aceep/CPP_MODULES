#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "Default constructor of ScavTrap called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap "  << this->_name << " has enterred in Gate keeper mode!" << std::endl;
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