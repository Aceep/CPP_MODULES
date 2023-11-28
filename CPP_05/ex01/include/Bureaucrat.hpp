#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
    private :
        std::string   _name;
        unsigned int        _grade;

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

        class GradeTooHighException : public std::exception {
            public :
                virtual const char *what() const throw() {return "Grade too high";}
        };
        class GradeTooLowException : public std::exception {
            public :
                virtual const char *what() const throw() {return "Grade too low";}
        };
};

#endif //BUREAUCRAT_HPP