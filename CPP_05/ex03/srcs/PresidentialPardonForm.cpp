#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
    this->_target = "Nobody";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
    this->_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src)
{
    *this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
    this->_target = src._target;
    return (*this);
}

std::string PresidentialPardonForm::getTarget() const
{
    return (this->_target);
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getGradetoexecute())
        throw AForm::GradeTooLowException();
    else
    {
        std::cout << executor.getName() << " execute the form" << std::endl;
        std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
    }
}

std::ostream   &operator<<(std::ostream &o, const PresidentialPardonForm &f)
{
    o << dynamic_cast<AForm const &>(f);
    o << "Target : " << f.getTarget() << std::endl;
    return o;
}