#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat *a = new Bureaucrat("Alain", 1);
    std::cout << "Le grade de " << a->getName() << " est de "<< a->getGrade() << std::endl;
    delete a;
    Bureaucrat *b = new Bureaucrat("Jean", 1500);
    std::cout << "Le grade de " << b->getName() << " est de "<< b->getGrade() << std::endl;
    delete b;
    Bureaucrat *c = new Bureaucrat("Robert", -1);
    std::cout << "Le grade de " << c->getName() << " est de "<< c->getGrade() << std::endl;
    delete c;
    return (0);
}