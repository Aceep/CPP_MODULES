#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal* tab = new Animal[10];

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            tab[i] = Dog();
        else
            tab[i] = Cat();
    }

    delete [] tab;    
    return 0;
}