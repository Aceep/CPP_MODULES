#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

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

            virtual void makeSound();
            virtual Brain *getBrain();
};

#endif