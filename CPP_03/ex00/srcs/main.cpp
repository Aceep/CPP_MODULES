#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapTrap("Lapaing");
    ClapTrap clapTrapCopy(clapTrap);

    for (int i = 0; i < 15; i++)
    {    
        clapTrap.attack("target");
        clapTrap.takeDamage(15);
        clapTrap.beRepaired(5);
    }
    return (0);
}