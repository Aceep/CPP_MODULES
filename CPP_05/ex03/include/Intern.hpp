#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern &src);
        ~Intern();
        Intern &operator=(const Intern &src);
        AForm *makeForm(std::string form, std::string target);

        AForm *makeShrubberyCreationForm(std::string target);
        AForm *makeRobotomyRequestForm(std::string target);
        AForm *makePresidentialPardonForm(std::string target);
        
        class FormNotFoundException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

#endif //INTERN_HPP