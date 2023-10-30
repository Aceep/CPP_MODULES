#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name)
{
    this->_name = name;
    this->_attackDamage = FragTrap::_attackDamage;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_hitPoints = FragTrap::_hitPoints;
    std::cout << "DiamondTrap constructor called for " << this->_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) : ScavTrap(src), FragTrap(src)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = src;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
    std::cout << "DiamondTrap operator= called" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return (*this);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is " << this->_name << std::endl;
    std::cout << "ClapTrap name is " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}




