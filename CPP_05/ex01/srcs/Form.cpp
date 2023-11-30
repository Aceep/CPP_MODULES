#include "Form.hpp"

Form::Form() : _name("hi"), _gradetosign(2), _gradetoexecute(5)
{
}

Form::Form(const std::string name, unsigned int grade, unsigned int gradetoexecute) : _name(name), _gradetosign(grade), _gradetoexecute(gradetoexecute)
{
    // if (grade < 1)
    //     throw(Form::GradeTooHighException());
    // else if (grade > 150)
    //     throw(Form::GradeTooLowException());
    // else
    //     this->_gradetosign = grade;
    // if (gradetoexecute < 1)
    //     throw(Form::GradeTooHighException());
    // else if (gradetoexecute > 150)
    //     throw(Form::GradeTooLowException());
    // else
    //     this->_gradetoexecute = gradetoexecute;
    this->_signed = false;
}

Form::~Form()
{
}

Form::Form(const Form &src) : _name(src._name), _gradetosign(src._gradetosign), _gradetoexecute(src._gradetoexecute)
{
    *this = src;
}

Form &Form::operator=(const Form &src)
{
    if (this != &src)
    {
        this->_signed = src._signed;

    }
    return (*this);
}

std::string Form::getName() const
{
    return (this->_name);
}

unsigned int Form::getGradetosign() const
{
    return (this->_gradetosign);
}

bool Form::getStatus() const
{
    return (this->_signed);
}   

unsigned int Form::getGradetoexecute() const
{
    return (this->_gradetoexecute);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_gradetosign)
        throw(Form::GradeTooLowException());
    else
        this->_signed = true;
}

std::ostream   &operator<<(std::ostream &o, const Form &f)
{
    o << "Information of " << f.getName() << std::endl;
    o << "Grade to sign : " << f.getGradetosign() << std::endl;
    o << "Grade to execute : " << f.getGradetoexecute() << std::endl;
    o << "Form is ";
    if (f.getStatus() == 0)
        o << "not signed" << std::endl;
    else
        o << "signed" << std::endl;
    return o;
}