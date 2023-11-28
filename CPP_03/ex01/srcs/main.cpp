#include "ScavTrap.hpp"

int main()
{
    std::cout << "-----ClapTrap--------" << std::endl;
    ClapTrap clapTrap("Lapaing");
    std::cout << "-----ScavTrap--------" << std::endl;
    ScavTrap scavTrap("Scavy");
    std::cout << "----ScavTrap by defaut----" << std::endl;
    ScavTrap scavTrapDefault;
    std::cout << std::endl;

    clapTrap.attack("Scavy");
    std::cout << std::endl;
    std::cout << "-----ScavTrap--------" << std::endl;
    scavTrap.attack("Lapaing");
    scavTrap.takeDamage(10);
    scavTrap.beRepaired(10);
    scavTrap.guardGate();
    std::cout << std::endl;

    return (0);
}