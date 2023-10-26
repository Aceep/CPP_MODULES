#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    std::string input = "La fete-a-la-maison";
    PhoneBook PhoneBook;
    bool    run = true;
    std::cout << input.length() << std::endl;
    std::cout << input.size() << std::endl;
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