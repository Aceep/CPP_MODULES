#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Brain.hpp"
# include "Animal.hpp"

class Cat : public Animal
{
    private :
        Brain *_brain;

    public :
        Cat();
        ~Cat();
        Cat(const Cat &src);
        Cat &operator=(const Cat &rhs);

        void makeSound() const;
        std::string getBrain(int i) const;
        void setIdea(std::string id);
};

#endif