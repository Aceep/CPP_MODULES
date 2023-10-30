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

    clapTrap.attack("Scavy");
    scavTrap.takeDamage(0);
    scavTrap.attack("Lapaing");
    clapTrap.takeDamage(20);
    fragTrap.attack("Lapaing");
    clapTrap.takeDamage(30);

    fragTrap.highFivesGuys();

    scavTrap.beRepaired(10);
    scavTrap.guardGate();

    return (0);
}