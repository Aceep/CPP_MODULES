#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapTrap("Lapaing");
    ClapTrap clapTrapCopy(clapTrap);

    for (int i = 0; i < 10; i++)
    {    
        clapTrap.attack("target");
        clapTrap.takeDamage(1);
        clapTrap.beRepaired(5);
    }
    return (0);
}