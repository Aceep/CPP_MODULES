#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog
{
    private :
        Dog();

    public :
        Dog(std::string type);
        ~Dog();
        Dog(const Dog *src);
        Dog &operator=(const Dog &rhs);
};

#endif