#include "Intern.hpp"

Intern::Intern()
{}

Intern::~Intern()
{}

Intern::Intern(const Intern &src)
{
    *this = src;
}

Intern &Intern::operator=(const Intern &src)
{
    (void)src;
    return (*this);
}

AForm *Intern::makeForm(std::string form, std::string target)
{
    std::string status[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    AForm* (Intern::*ptr_form[3])(std::string) = {&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm};

    for (int i = 0; i < 3; i++)
    {
        if (status[i] == form)
        {
            std::cout << "Intern creates " << form << std::endl;
            return (this->*ptr_form[i])(target);
        }
    }
    throw FormNotFoundException();
}

const char *Intern::FormNotFoundException::what() const throw()
{
    return ("Form not found");
}

AForm *Intern::makeShrubberyCreationForm(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeRobotomyRequestForm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

AForm *Intern::makePresidentialPardonForm(std::string target)
{
    return (new PresidentialPardonForm(target));
}
