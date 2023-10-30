#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private :
        FragTrap();

    public :
        FragTrap(std::string name);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif