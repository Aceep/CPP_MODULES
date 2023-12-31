#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private :
        Brain *_brain;

    public :
        Dog();
        ~Dog();
        Dog(const Dog &src);
        Dog &operator=(const Dog &rhs);

        void makeSound() const;
        std::string getBrain(int i) const;
        void setIdea(std::string id);
};

#endif