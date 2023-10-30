#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    private :
        

    public :
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();

        void guardGate();
};

#endif