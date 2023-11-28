#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->_attackDamage = 30;
    this->_energyPoints = 100;
    this->_hitPoints = 100;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_attackDamage = 30;
    this->_energyPoints = 100;
    this->_hitPoints = 100;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called for " << this->_name << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = src;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
    if (this != &src)
    {
        this->_name = src._name;
        this->_attackDamage = src._attackDamage;
        this->_energyPoints = src._energyPoints;
        this->_hitPoints = src._hitPoints;
    }
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " is asking for high fives!" << std::endl;
}