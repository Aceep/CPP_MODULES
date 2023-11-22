#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
    AMateria *c = new Cure();
    Character *a = new Character("Noah");
    std::cout << a->getName() << std::endl;
    a->equip(c);
    a->use(0, *a);
    
    // IMateriaSource* src = new MateriaSource();
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());

    // ICharacter* me = new Character("me");

    // AMateria* tmp;
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    
    // ICharacter* bob = new Character("bob");

    // me->use(0, *bob);
    // me->use(1, *bob);

    // delete bob;
    // delete me;
    // delete src;

    return 0;
}