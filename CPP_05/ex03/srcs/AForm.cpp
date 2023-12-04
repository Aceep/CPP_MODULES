#include "AForm.hpp"

AForm::AForm() : _name("hi"), _gradetosign(2), _gradetoexecute(5)
{
}

AForm::AForm(const std::string name, unsigned int grade, unsigned int gradetoexecute) : _name(name), _gradetosign(grade), _gradetoexecute(gradetoexecute)
{
    if (grade < 1)
        throw(AForm::GradeTooHighException());
    else if (grade > 150)
        throw(AForm::GradeTooLowException());
    if (gradetoexecute < 1)
        throw(AForm::GradeTooHighException());
    else if (gradetoexecute > 150)
        throw(AForm::GradeTooLowException());
    this->_signed = false;
}

AForm::~AForm()
{
}

AForm::AForm(const AForm &src) : _name(src._name), _gradetosign(src._gradetosign), _gradetoexecute(src._gradetoexecute)
{
    *this = src;
}

AForm &AForm::operator=(const AForm &src)
{
    if (this != &src)
    {
        this->_signed = src._signed;

    }
    return (*this);
}

std::string AForm::getName() const
{
    return (this->_name);
}

unsigned int AForm::getGradetosign() const
{
    return (this->_gradetosign);
}

bool AForm::getStatus() const
{
    return (this->_signed);
}   

unsigned int AForm::getGradetoexecute() const
{
    return (this->_gradetoexecute);
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_gradetosign)
        throw(AForm::GradeTooLowException());
    else
        this->_signed = true;
}

std::ostream   &operator<<(std::ostream &o, const AForm &f)
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