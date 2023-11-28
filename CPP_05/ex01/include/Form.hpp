#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Form
{
    private :
            const std::string   _name;
            bool				_signed;
			const unsigned int	_grade;
			const unsigned int	_gradetoexecute;
	
	public :
			Form();
			Form(const std::string name, int grade, int gradetoexecute);
			~Form();
			Form(const Form &src);
			Form &operator=(const Form &src);

			const char		*getName() const;
			unsigned int	*getGrade() const;
			bool 			getStatus() const;
			const char	*
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