#include "Bureaucrat.hpp"
#include "Form.hpp"
int main(void)
{
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Bureaucrat" << std::endl;
    try
    {
        Bureaucrat b("Georges", 1);
        std::cout << b.getName() << std::endl;
        std::cout << b.getGrade() << std::endl;
        b.decrementGrade();
        std::cout << b.getGrade() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        Form f("Form", 15, 1);
        std::cout << f.getName() << std::endl;
        std::cout << f.getGradetosign() << std::endl;
        std::cout << f.getStatus() << std::endl;
        std::cout << f.getGradetoexecute() << std::endl;
        Bureaucrat b("Georges", 1);
        b.signForm(f);
        std::cout << f.getStatus() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}