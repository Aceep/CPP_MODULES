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
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = src;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
    std::cout << "FragTrap operator= called" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " is asking for high fives!" << std::endl;
}