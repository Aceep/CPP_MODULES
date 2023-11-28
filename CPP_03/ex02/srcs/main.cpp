#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "-----ClapTrap--------" << std::endl;
    ClapTrap clapTrap("Lapaing");
    std::cout << "-----ScavTrap--------" << std::endl;
    ScavTrap scavTrap("Scavy");
    std::cout << "-----FlagTrap--------" << std::endl;
    FragTrap fragTrap("Fragy");
    std::cout << "-----FlagTrap Default--------" << std::endl;
    FragTrap fragTrapDefault;
    std::endl(std::cout);

    fragTrap.attack("Lapaing");
    fragTrap.takeDamage(10);
    fragTrap.beRepaired(10);

    fragTrap.highFivesGuys();

    std::endl(std::cout);

    return (0);
}