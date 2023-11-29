#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "Test of Deep Copy" << std::endl;
    std::cout << "Construction of Dog named Basic" << std::endl;
    Dog Basic;
    Basic.setIdea("idea");
    {
        std::cout << "Construction of Dog named tmp by deep copy of Basic" << std::endl;
        Dog tmp = Basic;
        std::cout << "tmp is destroyed at the end of the scope but Basic still there" << std::endl;
    }
    std::cout << "Basic is still there" << std::endl;
    Basic.makeSound();
    std::cout << Basic.getBrain(0) << std::endl;
    std::cout << "-------------------" << std::endl;
    Animal *Animals[10];
    for (int i = 0; i < 10; i ++)
    {
        if (i % 2 == 0)
            Animals[i] = new Dog();
        else
            Animals[i] = new Cat(); 
    }

    std::cout << "-------------------" << std::endl;
    std::cout << "Two animals two differents brains adress" << std::endl;
    dynamic_cast<Cat *>(Animals[1])->setIdea("idea");
    std::string A = dynamic_cast<Cat *>(Animals[1])->getBrain(0);
    std::cout << A << " adress " << &A << std::endl;
    dynamic_cast<Dog *>(Animals[0])->setIdea("idea");
    std::string B = dynamic_cast<Dog *>(Animals[0])->getBrain(0);
    std::cout << B << " adress " << &B << std::endl;

    std::cout << "-------------------" << std::endl;
    std::cout << "All the ideas of a cat" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        std::cout << dynamic_cast<Cat *>(Animals[1])->getBrain(i) << std::endl;
    }

    for (int i = 0; i < 10; i++)
    {
        delete Animals[i];
    }
    std::cout << "-------------------" << std::endl;
    std::cout << "Deep copy constructor" << std::endl;
    Cat *a = new Cat();
    dynamic_cast<Cat *>(a)->setIdea("idea");
    Cat b = *a;
    std::string b_idea1 = dynamic_cast<Cat *>(&b)->getBrain(0);
    std::cout << "Adress for the b Cat brain " << &b_idea1 << std::endl;
    std::cout << b_idea1 << std::endl;
    dynamic_cast<Cat *>(&b)->setIdea("MIAM");
    std::string a_idea = dynamic_cast<Cat *>(a)->getBrain(0);
    std::cout << "Adress for the a Cat brain " << &a_idea << std::endl;
    std::cout << a_idea << std::endl;
    delete a;
    std::string b_idea = dynamic_cast<Cat *>(&b)->getBrain(0);
    std::cout << "Adress for the b Cat brain " << &b_idea << std::endl;
    std::cout << b_idea << std::endl;
    return 0;
}