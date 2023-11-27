#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade)
{
    this->_name = name;
    try 
    {
        if (grade >= 1 && grade <= 150)
        {
            this->_grade = grade;
        }
        else 
        {
            throw(grade);
        }
    }
    catch (unsigned int grade)
    {
        std::cout << grade << "is not a valid grade" << std::endl;
    }
}
Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
    *this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
    if (this != &src)
    {
        this->_name = src._name;
        this->_grade = src._grade;
    }
    return (*this);
}