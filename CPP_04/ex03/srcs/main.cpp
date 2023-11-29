#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
    std::cout << "-------------------" << std::endl;
    std::cout << "Creation of equipement / character and equip / use" << std::endl;
    AMateria *c = new Cure();
    AMateria *i = new Ice();
    AMateria *c2 = c->clone();
    ICharacter *a = new Character("Noah");
    std::cout << a->getName() << std::endl;
    std::cout << "equip c" <<std::endl;
    a->equip(c);
    std::cout << "equip c2" <<std::endl;
    a->equip(c2);
    a->use(0, *a);
    a->use(1, *a);
    a->equip(i);
    a->use(1, *a);
    a->use(2, *a);
    
    delete a;
    std::cout << std::endl;

    std::cout << "-------------------" << std::endl;
    std::cout << "Material source" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());

    std::cout << std::endl;

    Character* me = new Character("me");

    me->equip(src->createMateria("ice"));
    me->equip(src->createMateria("cure"));
    me->equip(src->createMateria("ice"));
    me->equip(src->createMateria("cure"));
    me->equip(src->createMateria("ice"));
    std::cout << std::endl;
    
    Character* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    std::cout << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << "Copy constructor" << std::endl;
    AMateria *floor[100];
    Character *you = me;
    you->use(0, *bob);
    floor[0] = you->getInventory(0);
    you->unequip(0);
    bob->equip(floor[0]);
    bob->use(0, *you);
    std::cout << std::endl;

    delete bob;
    delete me;
    delete src;
    return 0;
}