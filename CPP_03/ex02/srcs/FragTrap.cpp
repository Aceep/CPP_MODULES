#include "FragTrap.hpp"


FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_attackDamage = 30;
    this->_energyPoints = 100;
    this->_hitPoints = 100;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " is asking for high fives!" << std::endl;
}