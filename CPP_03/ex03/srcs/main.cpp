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
    std::cout << "-----DiamondTrap Default--------" << std::endl;
    DiamondTrap diamondTrapDefault;
    std::endl(std::cout);

    std::cout << std::endl;
    diamondTrap.whoAmI();
    diamondTrap.attack("Lapaing");
    diamondTrap.guardGate();
    diamondTrap.highFivesGuys();
    diamondTrap.takeDamage(10);
    diamondTrap.beRepaired(10);
    std::cout << std::endl;
    return (0);
}