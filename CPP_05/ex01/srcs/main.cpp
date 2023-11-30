#include "Bureaucrat.hpp"
#include "Form.hpp"
int main(void)
{
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Bureaucrat" << std::endl;
    try
    {
        Bureaucrat b("Georges", 1);
        std::cout << b;
        std::cout << "Try to decrement grade (should be grade 2) " << std::endl;
        b.decrementGrade();
        std::cout << b;
        std::cout << "Try to increment grade (should be grade 1) " << std::endl;
        b.incrementGrade();
        std::cout << b;
        std::cout << "Try to increment grade (should throw an exception grade too high) " << std::endl;
        b.incrementGrade();
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        std::cout << std::endl;
        Form f("Incs", 15, 1);
        std::cout << f;
        Bureaucrat b("Georges", 14);
        std::cout << std::endl;
        std::cout << b;
        std::cout << std::endl;
        std::cout << "Georges tries to sign Incs (He can so the form should be signed) " << std::endl;
        b.signForm(f);
        std::cout << f;
        std::cout << std::endl;
        Form g("Test", 1, 1);
        std::cout << g;
        std::cout << std::endl;
        std::cout << "Georges tries to sign Test (He can't so the form should not be signed) " << std::endl;
        b.signForm(g);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try {
        std::cout << std::endl;
        Form a("Form", 15, 1);
        std::cout << a;
        std::cout << std::endl;
        Bureaucrat c("Georges", 12);
        std::cout << c;
        std::cout << std::endl;
        a.beSigned(c);
        std::cout << a;
    }
    catch  (const std::exception &e) {
        std::cerr << e.what() << '\n';
    }
    return (0);
}