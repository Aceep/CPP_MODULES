#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    else if (grade > 150)
        throw(Bureaucrat::GradeTooLowException());
    else
    {
        this->_grade = grade;
    }
}
Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name)
{
    *this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
    if (this != &src)
    {
        this->_grade = src._grade;
    }
    return (*this);
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

unsigned int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void Bureaucrat::decrementGrade()
{
    if (this->_grade + 1 > 150)
        throw(Bureaucrat::GradeTooLowException());
    else
        this->_grade++;
}

void Bureaucrat::incrementGrade()
{
    if (this->_grade - 1 < 1)
        throw(Bureaucrat::GradeTooHighException());
    else
        this->_grade--;
}

void Bureaucrat::signForm(Form &form)
{
    if (form.getGradetosign() >= this->_grade)
    {
        std::cout << this->_name << " signs " << form.getName() << std::endl;
        form.beSigned(*this);
    }
    else
    {
        throw Bureaucrat::GradeTooLowException();
        std::cout << this->_name << " cannot sign " << form.getName() << " because his grade is too low" << std::endl;
    }
}

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &b)
{
    o << "Information of " << b.getName() << std::endl;
    o << "Name : " << b.getName() << std::endl << "Grade : " << b.getGrade() << std::endl;
    return o;
}