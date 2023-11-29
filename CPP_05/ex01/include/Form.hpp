#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private :
            const std::string   _name;
            bool				_signed;
			const unsigned int	_gradetosign;
			const unsigned int	_gradetoexecute;
	
	public :
			Form();
			Form(const std::string name, unsigned int grade, unsigned int gradetoexecute);
			~Form();
			Form(const Form &src);
			Form &operator=(const Form &src);

			std::string		getName() const;
			unsigned int	getGradetosign() const;
			bool 			getStatus() const;
			unsigned int	getGradetoexecute() const;
			void			beSigned(const Bureaucrat &bureaucrat);

		class GradeTooHighException : public std::exception {
            public :
                virtual const char *what() const throw() {return "Grade too high";}
        };
        class GradeTooLowException : public std::exception {
            public :
                virtual const char *what() const throw() {return "Grade too low";}
        };
};

#endif //FORM_HPP