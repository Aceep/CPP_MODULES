#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    // try {
    //     std::cout << "SHRUBBERY CREATION FORM" << std::endl;
    //     AForm *f = new ShrubberyCreationForm("Noah");
    //     std::cout << dynamic_cast<ShrubberyCreationForm &>(*f) << std::endl;
    //     Bureaucrat b = Bureaucrat("Girafe", 1);
    //     std::cout << b << std::endl;
    //     b.signForm(*f);
    //     std::cout << dynamic_cast<ShrubberyCreationForm &>(*f) << std::endl;
    //     dynamic_cast<ShrubberyCreationForm *>(f)->execute(b);
    //     std::cout << "A file called Noah_shrubbery has been created" << std::endl;
    //     delete f;
    //     AForm *f2 = new ShrubberyCreationForm("Marie");
    //     std::cout << dynamic_cast<ShrubberyCreationForm &>(*f2) << std::endl;
    //     Bureaucrat b2 = Bureaucrat("Girafe", 138);
    //     std::cout << b2 << std::endl;
    //     b2.signForm(*f2);
    //     std::cout << dynamic_cast<ShrubberyCreationForm &>(*f2) << std::endl;
    //     std::cout << "Girafe cannot execute the form because his grade is too low" << std::endl;
    //     dynamic_cast<ShrubberyCreationForm *>(f2)->execute(b2);
    // }
    // catch (std::exception &e) {
    //     std::cout << e.what() << std::endl;
    // }

    // try {
    //     std::cout << "ROBOTOMY REQUEST FORM" << std::endl;
    //     AForm *f = new RobotomyRequestForm("Noah");
    //     std::cout << dynamic_cast<RobotomyRequestForm &>(*f) << std::endl;
    //     Bureaucrat b = Bureaucrat("Girafe", 1);
    //     std::cout << b << std::endl;
    //     b.signForm(*f);
    //     std::cout << dynamic_cast<RobotomyRequestForm &>(*f) << std::endl;
    //     dynamic_cast<RobotomyRequestForm *>(f)->execute(b);
    //     std::cout << std::endl;
    //     delete f;
    //     AForm *f2 = new RobotomyRequestForm("Marie");
    //     std::cout << dynamic_cast<RobotomyRequestForm &>(*f2) << std::endl;
    //     Bureaucrat b2 = Bureaucrat("Girafe", 50);
    //     std::cout << b2 << std::endl;
    //     b2.signForm(*f2);
    //     std::cout << dynamic_cast<RobotomyRequestForm &>(*f2) << std::endl;
    //     std::cout << "Girafe cannot execute the form because grade too low" << std::endl;
    //     dynamic_cast<RobotomyRequestForm *>(f2)->execute(b2);
    // }
    // catch (std::exception &e) {
    //     std::cout << e.what() << std::endl;
    // }
    
    int i = std::rand() % 100;
    std::cout << i << std::endl;
    return (0);
}