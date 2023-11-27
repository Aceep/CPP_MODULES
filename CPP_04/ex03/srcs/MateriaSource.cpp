#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "Constructor MateriaSource called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        this->_materia[i] = NULL;
    }
}

MateriaSource::~MateriaSource()
{
    std::cout << "Destructor MateriaSource called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i] != NULL)
        {
            delete this->_materia[i];
        }
    }
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
    std::cout << "Copy constructor MateriaSource called" << std::endl;
    *this = src;
}

MateriaSource   &MateriaSource::operator=(const MateriaSource &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_materia[i] != NULL)
            {
                delete this->_materia[i];
            }
            this->_materia[i] = rhs._materia[i]->clone();
        }
    }
    return (*this);
}

void            MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i] == NULL)
        {
            this->_materia[i] = m;
            break ;
        }
    }
}

AMateria    *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i] != NULL && this->_materia[i]->getType() == type)
        {
            return (this->_materia[i]->clone());
        }
    }
    return (NULL);
}