#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :  AForm("ShrubberyCreationForm", 145, 137), _target("Nobody")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) 
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
{
    *this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
    this->_target = src._target;
    return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
    return (this->_target);
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getGradetoexecute())
        throw AForm::GradeTooLowException();
    else
    {
        std::cout << executor.getName() << " execute the form" << std::endl;
        std::ofstream ofs;
        ofs.open((this->getTarget() + "_shrubbery").c_str());
    }
}

std::ostream   &operator<<(std::ostream &o, const ShrubberyCreationForm &f)
{
    o << AForm(f);
    o << "Target : " << f.getTarget() << std::endl;
    return o;
}
