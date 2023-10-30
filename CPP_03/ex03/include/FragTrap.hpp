#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    private :
        

    public :
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(FragTrap const & src);
        FragTrap & operator=(FragTrap const & rhs);

        void highFivesGuys(void);
};

#endif