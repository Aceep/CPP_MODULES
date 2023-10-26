#include "Zombie.hpp"

int main()
{
    std::string name;
    std::cout << "Creating a new Zombie..." << std::endl;
    std::cout << "Zombie's name: " << std::flush;
    std::cin >> name;
    Zombie zombie1 = Zombie(name);
    zombie1.announce();
    std::cout << "Creating a new Zombie..." << std::endl;
    std::cout << "Zombie's name: " << std::flush;
    std::cin >> name;
    Zombie *zombie2 = newZombie(name);
    zombie2->announce();
    delete zombie2;
    randomChump("randomChump");
    return (0);
}