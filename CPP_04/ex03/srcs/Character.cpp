#include "Character.hpp"

Character::Character()
{
    std::cout << "Character::Character()" << std::endl;
}

Character::Character(std::string name)
{
    std::cout << "Character::Character(std::string name)" << std::endl;
    this->_name = name;
    //this->_inventory = new AMateria[4];
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = NULL;
    }
}

Character::~Character()
{
    std::cout << "Character::~Character()" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] != NULL)
        {
            delete this->_inventory[i];
        }
    }
    delete [] this->_inventory;
}

Character::Character(const Character &src)
{
    std::cout << "Character::Character(const Character &src)" << std::endl;
    *this = src;
}

Character *Character::operator=(const Character &rhs)
{
    std::cout << "Character::operator=(const Character &rhs)" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        for (int i = 0; i < 4; i++)
        {
            if (this->_inventory[i] != NULL)
            {
                delete this->_inventory[i];
            }
        }
        for (int i = 0; i < 4; i++)
        {
            if (rhs._inventory[i] != NULL)
            {
                this->_inventory[i] = rhs._inventory[i]->clone();
            }
            else
            {
                this->_inventory[i] = NULL;
            }
        }
    }
    return this;
}

std::string const &Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        this->_inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL)
    {
        this->_inventory[idx]->use(target);
    }
}
