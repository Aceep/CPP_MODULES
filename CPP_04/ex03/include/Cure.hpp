#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice
{
    public :
            Ice();
            virtual ~Ice();
            Ice(const Ice &src);
            Ice &operator=(const Ice &rhs);

            virtual AMateria* clone() const;
            virtual void use(ICharacter& target);
};

#endif // CURE_HPP