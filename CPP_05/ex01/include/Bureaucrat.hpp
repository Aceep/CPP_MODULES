#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
    private :
        const std::string           _name;
        unsigned int                _grade;

    public :
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &src);
        Bureaucrat &operator=(const Bureaucrat &src);

        std::string getName() const;
        unsigned int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        void signForm(Form &form);

        class GradeTooHighException : public std::exception {
            public :
                virtual const char *what() const throw() {return "Grade too high";}
        };
        class GradeTooLowException : public std::exception {
            public :
                virtual const char *what() const throw() {return "Grade too low";}
        };
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &b);

#endif //BUREAUCRAT_HPP