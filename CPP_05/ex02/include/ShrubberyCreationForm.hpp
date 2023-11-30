#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private :
        std::string _target;

    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &src);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);

        std::string getTarget() const;
        void execute(Bureaucrat const &executor) const;
};

std::ostream	&operator<<(std::ostream &o, const ShrubberyCreationForm &f);

#endif //SHRUBBERYCREATIONFORM_HPP