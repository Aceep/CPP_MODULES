#include "ScavTrap.hpp"

int main()
{
    std::cout << "-----ClapTrap--------" << std::endl;
    ClapTrap clapTrap("Lapaing");
    std::cout << "-----ScavTrap--------" << std::endl;
    ScavTrap scavTrap("Scavy");

    clapTrap.attack("Scavy");
    scavTrap.attack("Lapaing");
    scavTrap.takeDamage(10);
    scavTrap.beRepaired(10);
    scavTrap.guardGate();

    return (0);
}