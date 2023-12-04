#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    try {
        Intern slave = Intern();
        AForm *f = slave.makeForm("ShrubberyCreationForm", "Noah");
        std::cout << dynamic_cast<ShrubberyCreationForm &>(*f) << std::endl;
        AForm *f2 = slave.makeForm("RobotomyRequestForm", "Noah");
        std::cout << dynamic_cast<RobotomyRequestForm &>(*f2) << std::endl;
        AForm *f3 = slave.makeForm("PresidentialPardonForm", "Noah");
        std::cout << dynamic_cast<PresidentialPardonForm &>(*f3) << std::endl;
        delete f;
        delete f2;
        delete f3;
        slave.makeForm("Form", "Noah");
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}