#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
    private :
        std::string _name;

    public :
        Zombie();
        ~Zombie();
        Zombie* zombieHorde( int N, std::string name );
        void setName(std::string name);
        void announce();
};

Zombie* zombieHorde( int N, std::string name );

#endif