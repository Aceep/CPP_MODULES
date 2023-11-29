#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "Test of Animal" << std::endl;
    Animal *meta = new Animal();
    std::cout << "Dog : " << std::endl;
    Animal *j = new Dog();
    std::cout << "Cat : " << std::endl;
    Animal *i = new Cat();

    std::cout << std::endl << "Test of animal voice : " << std::endl << std::endl;
    std::cout << "Sound of a non type Animal :" << std::endl;
    meta->makeSound();
    std::cout << "Sound of a Dog :" << std::endl;
    j->makeSound();
    std::cout << "Sound of a Cat :" << std::endl;
    i->makeSound();
    std::cout << std::endl;

    delete meta;
    delete j;
    delete i;
    
    std::cout << "Test of WrongAnimal" << std::endl << std::endl;
    WrongAnimal* metaWrong = new WrongAnimal();
    WrongAnimal* jWrong = new WrongCat();

    std::cout << "Sound of a non type WrongAnimal :    ";
    metaWrong->makeSound();
    std::cout << "Sound of a WrongCat :       ";
    jWrong->makeSound();
    std::cout << std::endl;

    delete metaWrong;
    delete jWrong;
    return 0;
}