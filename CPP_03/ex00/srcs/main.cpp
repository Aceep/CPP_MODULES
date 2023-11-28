#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapTrap("Lapaing");
    std::cout << std::endl;
    ClapTrap clapTrapCopy(clapTrap);
    std::cout << std::endl;
    ClapTrap clapTrapAssign;
    std::cout << std::endl;

    for (int i = 0; i < 10; i++)
    {    
        if (clapTrap.getHitPoints() > 0)
        {
            clapTrap.attack("target");
            clapTrap.takeDamage(10);
            clapTrap.beRepaired(5);
        }
    }
    std::cout << std::endl;
    return (0);
}