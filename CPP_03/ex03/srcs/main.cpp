#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    // std::cout << "-----ClapTrap--------" << std::endl;
    // ClapTrap clapTrap("Lapaing");
    // std::cout << "-----ScavTrap--------" << std::endl;
    // ScavTrap scavTrap("Scavy");
    // std::cout << "-----FlagTrap--------" << std::endl;
    // FragTrap fragTrap("Fragy");
    std::cout << "-----DiamondTrap--------" << std::endl;
    DiamondTrap diamondTrap("Diamondy");

    std::cout << std::endl;
    diamondTrap.whoAmI();
    std::cout << std::endl;
    diamondTrap.attack("Lapaing");
    std::cout << std::endl;
    diamondTrap.guardGate();
    std::cout << std::endl;
    diamondTrap.highFivesGuys();
    std::cout << std::endl;
    diamondTrap.takeDamage(10);
    std::cout << std::endl;
    diamondTrap.beRepaired(10);
    std::cout << std::endl;
    return (0);
}