#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
    this->_target = "Nobody";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
    this->_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src)
{
    *this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
    this->_target = src._target;
    return (*this);
}

std::string RobotomyRequestForm::getTarget() const
{
    return (this->_target);
}

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getGradetoexecute() || !this->getStatus())
        throw AForm::GradeTooLowException();
    else
    {
        std::cout << "Bzzz" << std::endl;
        srand (time(NULL));
        if (rand() % 2 == 0)
            std::cout << this->_target << " has been robotomized successfully" << std::endl;
        else
            std::cout << this->_target << " has not been robotomized" << std::endl;
    }
}

std::ostream   &operator<<(std::ostream &o, const RobotomyRequestForm &f)
{
    o << dynamic_cast<AForm const &>(f);
    o << "Target : " << f.getTarget() << std::endl;
    return o;
}