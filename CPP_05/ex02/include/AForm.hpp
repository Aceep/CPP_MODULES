#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    protected :
            const std::string   _name;
            bool				_signed;
			const unsigned int	_gradetosign;
			const unsigned int	_gradetoexecute;
	
	public :
			AForm();
			AForm(const std::string name, unsigned int grade, unsigned int gradetoexecute);
			virtual ~AForm();
			AForm(const AForm &src);
			AForm &operator=(const AForm &src);

			

			std::string		getName() const;
			unsigned int	getGradetosign() const;
			bool 			getStatus() const;
			unsigned int	getGradetoexecute() const;
			void			beSigned(Bureaucrat &bureaucrat);

		class GradeTooHighException : public std::exception {
            public :
                virtual const char *what() const throw() {return "Grade too high";}
        };
        class GradeTooLowException : public std::exception {
            public :
                virtual const char *what() const throw() {return "Grade too low";}
        };
};

std::ostream	&operator<<(std::ostream &o, const AForm &f);

#endif //FORM_HPP