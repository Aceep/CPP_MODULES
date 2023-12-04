#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :  AForm("ShrubberyCreationForm", 145, 137), _target("Nobody")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) 
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src.getName(), src.getGradetoexecute(), src.getGradetosign()), _target(src.getTarget())
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
		ofs << "               ,@@@@@@@,\n";
        ofs << "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n";
        ofs << "    ,&%%&%&&%,@@@@@/@@@@@@,8888888/8o\n";
        ofs << "   ,%&8%&&%&&%,@@@8@@@/@@@88888888/88'\n";
        ofs << "   %&&%&%&/%&&%@@8@@/ /@@@88888888888'\n";
        ofs << "   %&&%/ %&%%&&@@] V /@@' `88]8 `/88'\n";
        ofs << "   `&%'|' ` /%&'    |.|        '|' |8'\n";
        ofs << "       |o|        | |         | |\n";
        ofs << "       |.|        | |         | |\n";
        ofs << "    ||/ ._|//_/__/  ,|_//__||/.  |_//__/_\n" << std::endl;
		ofs.close();
    }
}

std::ostream   &operator<<(std::ostream &o, const ShrubberyCreationForm &f)
{
    o << dynamic_cast<AForm const &>(f);
    o << "Target : " << f.getTarget() << std::endl;
    return o;
}
