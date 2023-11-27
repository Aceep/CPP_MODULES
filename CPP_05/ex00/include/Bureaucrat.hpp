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
};

#endif //BUREAUCRAT_HPP