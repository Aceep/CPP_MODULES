#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
    private :
        std::string _name;

    public :
        DiamondTrap();
        DiamondTrap(std::string name);
        ~DiamondTrap();
        DiamondTrap(DiamondTrap const & src);
        DiamondTrap & operator=(DiamondTrap const & rhs);

        void attack(std::string const & target);
        void whoAmI();
};

#endif