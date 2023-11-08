#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << std::endl;
    std::cout << "Animal:" << std::endl;
    std::cout << std::endl;
    meta->makeSound();
    std::cout << std::endl;
    std::cout << "Dog:" << std::endl;
    std::cout << std::endl;
    j->makeSound();
    std::cout << std::endl;
    std::cout << "Cat:" << std::endl;
    std::cout << std::endl;
    i->makeSound();
    std::cout << std::endl;
    std::cout << "Wrong Animal:" << std::endl;
    std::cout << std::endl;
    const Animal* wrong = new Animal();
    wrong->makeSound();
    std::cout << std::endl;
    std::cout << "Wrong Dog:" << std::endl;
    std::cout << std::endl;
    const Animal* wrongDog = new Dog();
    wrongDog->makeSound();
    std::cout << std::endl;
    std::cout << "Wrong Cat:" << std::endl;
    std::cout << std::endl;
    const Animal* wrongCat = new Cat();
    wrongCat->makeSound();
    std::cout << std::endl;
    std::cout << "Delete:" << std::endl;
    std::cout << std::endl;
    delete meta;
    delete j;
    delete i;
    delete wrong;
    delete wrongDog;
    delete wrongCat;
    return 0;
}