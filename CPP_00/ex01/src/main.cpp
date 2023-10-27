#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    PhoneBook PhoneBook;
    bool    run = true;
    std::string input;

    std::cout << "Welcome to the PhoneBook !" << PhoneBook.show_instruction() << std::endl;
    while (run && std::getline(std::cin, input))
    {
        if (input.compare("ADD") == 0)
            PhoneBook.set_information();
        else if (input.compare("SEARCH") == 0)
            PhoneBook.get_information();
        else if (input.compare("EXIT") == 0)
        {
            std::cout << "Bye bye !" << std::endl;
            run = false;
            break ;
        }
        input.clear();    
    }
    return (0);
}