#include "Zombie.hpp"

int main(void)
{
    int i = 125;
    Zombie* horde = zombieHorde(i, "Zombie");
    while (i - 1 >= 0)
    {
        std::cout << i << " : ";
        horde[i - 1].announce();
        i--;
    }
    delete [] horde;
    return (0);
}