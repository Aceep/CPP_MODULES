#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class AMateria
{
    protected :
            std::string _type;

    public :
            AMateria();
            virtual ~AMateria();
            AMateria(const AMateria &src);
            AMateria &operator=(const AMateria &rhs);

            virtual AMateria* clone() const = 0;
            virtual void use(ICharacter& target);
};

#endif // AMATERIA_HPP