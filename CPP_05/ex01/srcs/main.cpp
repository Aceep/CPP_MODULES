#include "Bureaucrat.hpp"

int main(void)
{
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Creation de Bureaucrates :" << std::endl;
    try{
        Bureaucrat a = Bureaucrat("Alain", 156);
        std::cout << "Le grade de " << a.getName() << " est de "<< a.getGrade() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "For bureaucrat a : ";
        std::cout << e.what() << std::endl;
    }
    
    try{
        Bureaucrat b = Bureaucrat("Albert", 15);
        std::cout << "Le grade de " << b.getName() << " est de "<< b.getGrade() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "For bureaucrat b : ";
        std::cout << e.what() << std::endl;
    }

    try{
        Bureaucrat c = Bureaucrat("Albert", 0);
        std::cout << "Le grade de " << c.getName() << " est de "<< c.getGrade() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "For bureaucrat c : ";
        std::cout << e.what() << std::endl;
    }

    std::cout << "------------------------------------" << std::endl;
    std::cout << "Tests de decremention/incremention grade :" << std::endl;
    try{
        Bureaucrat d = Bureaucrat("Alister", 1);
        d.incrementGrade();
        std::cout << "Le nouveau grade de " << d.getName() << " est de "<< d.getGrade() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "For bureaucrat d new grade : ";
        std::cout << e.what() << std::endl;
    }

    try{
        Bureaucrat e = Bureaucrat("Aymeric", 15);
        e.incrementGrade();
        std::cout << "Le grade de " << e.getName() << " est de "<< e.getGrade() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "For bureaucrat e new grade : ";
        std::cout << e.what() << std::endl;
    }

    try{
        Bureaucrat f = Bureaucrat("Alphonse", 150);
        f.decrementGrade();
        std::cout << "Le grade de " << f.getName() << " est de "<< f.getGrade() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "For bureaucrat f new grade : ";
        std::cout << e.what() << std::endl;
    }
    return (0);
}