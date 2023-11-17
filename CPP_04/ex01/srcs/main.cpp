#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
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
    Cat *a = new Cat();
    Cat b = *a;
    //dynamic_cast<Cat *>(a)->setIdea("idea");
    std::string a_idea = dynamic_cast<Cat *>(a)->getBrain(0);
    std::cout << "Adress for the a Cat brain " << &a_idea << std::endl;
    //std::string b_idea = dynamic_cast<Cat *>(b)->getBrain(0);
    //std::cout << "Adress for the b Cat brain " << &b_idea << std::endl;
    //delete a;
    //delete b;
    return 0;
}