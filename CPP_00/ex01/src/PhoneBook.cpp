#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->_index = 0;
    this->_full = false;
}

PhoneBook::~PhoneBook()
{
}

std::string PhoneBook::show_instruction() const
{
    return ("Please enter one of the following commands :\nADD\nSEARCH\nEXIT");
}

void    PhoneBook::set_information()
{
    std::string input;
    static int index;
    bool remplace = false;

    if (this->_full == false)
    {
        std::cout << "This is your contact " << index + 1 << std::endl;
        if (this->_contact[index].create_contact() == true)
        {
            this->_contact[index].set_index(index + 1);
            if (index == 7 || remplace == true)
                this->_full = true;
            else
            {
                index++;
                if(this->_index < 8)
                    this->_index++;
            }
            std::cout << "\033[32mContact created\033[0m\nYou can enter a new command" << std::endl;
        }
        else
            std::cout << "Contact creation aborted\nYou can enter a new command" << std::endl;
    }
    else
    {
        if (index == 7)
            index = 0;
        std::cout << "The PhoneBook is full, you're older contact will be changed\n";
        remplace = true;
        this->_full = false;
        set_information();
    }
}

void    PhoneBook::get_information() const
{
    int i = 0;
    std::string input;
    int index;

    if (this->_index == 0)
        std::cout << "The PhoneBook is empty, please enter one of the following commands :\nADD\nEXIT\n";
    else
    {
        std::cout << "     index|first name| last name|  nickname|" << std::endl;
        while (i < this->_index)
        {
            this->_contact[i].display();
            i++;
        }
        i= 0;
        std::cout << "Please enter the index of the contact you want to see (You have " << this->_index << " contact(s))"<< std::endl;
        std::getline(std::cin, input);
        while(input.empty() == true || input.length() > 1 || input[0] < '1' || input[0] > '8' || input[0] - '0' > this->_index)
        {
            std::cout << "\033[31mPlease enter a correct index\033[0m" << std::endl;
            std::getline(std::cin, input);
        }
        index = input[0] - '0';
        while (i <= this->_index)
        {
            if (index == i + 1)
            {
                this->_contact[i].view(i + 1);
                break;
            }
            else
                i++;
        }
        
    }
}