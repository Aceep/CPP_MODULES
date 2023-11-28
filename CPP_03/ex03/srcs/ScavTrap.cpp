#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "Default constructor of ScavTrap called" << std::endl;
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

ScavTrap::ScavTrap(ScavTrap const & src)
{
    std::cout << "Copy constructor of ScavTrap called for " << this->_name << std::endl;
    *this = src;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
    std::cout << "Assignation operator of ScavTrap called for " << this->_name << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
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