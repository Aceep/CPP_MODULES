#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal* meta = new Animal();
    Animal* j = new Dog();
    Animal* i = new Cat();

    std::cout << std::endl << "Test of animal voice : " << std::endl << std::endl;
    std::cout << "Sound of a non type Animal :" << std::endl;
    meta->makeSound();
    std::cout << "Sound of a Dog :" << std::endl;
    j->makeSound();
    std::cout << "Sound of a Cat :" << std::endl;
    i->makeSound();
    std::cout << std::endl;

    std::cout << "Test of WrongAnimal" << std::endl << std::endl;
    WrongAnimal* metaWrong = new WrongAnimal();
    WrongAnimal* jWrong = new WrongCat();

    std::cout << "Sound of a non type WrongAnimal :" << std::endl;
    metaWrong->makeSound();
    std::cout << "Sound of a WrongCat :" << std::endl;
    jWrong->makeSound();

    return 0;
}