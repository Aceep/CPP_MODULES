#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected :
            std::string _type;

    public :
            Animal();
            Animal(std::string type);
            ~Animal();
            Animal(const Animal &src);
            Animal &operator=(const Animal &rhs);
};

#endif