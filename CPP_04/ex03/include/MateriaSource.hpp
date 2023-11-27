#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    private :
            AMateria    *_materia[4];

    public :
            MateriaSource();
            ~MateriaSource();
            MateriaSource(const MateriaSource &src);
            MateriaSource   &operator=(const MateriaSource &rhs);

            void            learnMateria(AMateria *m);
            AMateria        *createMateria(std::string const &type);
};

#endif // MATERIA_SOURCE_HPP