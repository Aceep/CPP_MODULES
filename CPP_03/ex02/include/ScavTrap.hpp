#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private :
        ScavTrap();

    public :
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & src);
        ScavTrap & operator=(ScavTrap const & rhs);
        ~ScavTrap();

        void guardGate();
        void attack(std::string const & target);
};

#endif