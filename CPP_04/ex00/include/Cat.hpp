#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat
{
    private :
        Cat();

    public :
        Cat(std::string type);
        ~Cat();
        Cat(const Cat *src);
        Cat &operator=(const Cat &rhs);
};

#endif