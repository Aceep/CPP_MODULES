#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private :
        std::string _target;
    public :
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &src);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &src);

        std::string getTarget() const;
        void execute(Bureaucrat const &executor) const;
};

std::ostream	&operator<<(std::ostream &o, const PresidentialPardonForm &f);

#endif //PRESIDENTIALPARDONFORM_HPP