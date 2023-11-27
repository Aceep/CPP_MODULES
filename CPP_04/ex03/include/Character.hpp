#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
        protected :
            std::string _name;
            AMateria *_inventory[4];

        public :
            Character();
            Character(std::string name);
            ~Character();
            Character(const Character &src);
            Character *operator=(const Character &src);

            std::string const &getName() const;
            void equip(AMateria *m);
            void unequip(int idx);
            void use(int idx, ICharacter &target);
};

#endif // CHARACTER_HPP