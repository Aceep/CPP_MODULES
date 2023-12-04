#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private :
        std::string _target;

    public :
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &src);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &src);

        std::string getTarget() const;
        void execute(Bureaucrat const &executor) const;
};

std::ostream	&operator<<(std::ostream &o, const RobotomyRequestForm &f);

#endif //ROBOTOMYREQUESTFORM_HPP