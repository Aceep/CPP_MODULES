#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

bool    Contact::is_empty(std::string str, std::string message)
{
    int i = 0;
    static int st = 0;

    while (str.empty() == true)
    {
        if (st == 1)
        {    
            std::cout << "\033[31mPhone number must be a number\nPlease choose one to continue\033[0m\nTo abort the creation of a contact, please write 0" << std::endl;
            st = 0;
        }
        else
            std::cout << "\033[31m" << message << " can't be empty\nPlease choose one to continue\033[0m\nTo abort the creation of a contact, please write 0" << std::endl;
        std::cout << message << " :";
        std::getline(std::cin, str);
        i++;
        if (i == 10)
        {
            std::cout << "\033[31mYou have entered an incorrect " << message << " 10 times ! Are you kidding ?\n\033[0m" << std::endl;
            return (false);
        }
        else if (str.compare("0") == 0)
            return (false);
    }
    if (message == "First name")
        this->_first_name = str;
    else if (message == "Phone number")
    {
        if (str.find_first_not_of("0123456789") != std::string::npos)
        {    
            st = 1;
            if (is_empty("", message) == false)
                return (false);
        }
        else
            st = 0;
        this->_phone_number = str;
    }    
    else if (message == "Last name")
        this->_last_name = str;
    else if (message == "Nickname")
        this->_nickname = str;
    else if (message == "Darkest secret")
        this->_darkest_secret = str;
    return (true);
}

bool    Contact::create_contact()
{
    Contact contact;

    if (!this->_first_name.empty())
        contact = *this;
    std::cout << "First name :";
    std::getline(std::cin, this->_first_name);
    if (is_empty(this->_first_name, "First name") == false)
        return (*this = contact, false);
    std::cout << "Last name :";
    std::getline(std::cin, this->_last_name);
    if (is_empty(this->_last_name, "Last name") == false)
        return (*this = contact, false);
    std::cout << "Nickname :";
    std::getline(std::cin, this->_nickname);
    if (is_empty(this->_nickname, "Nickname") == false)
        return (*this = contact, false);
    std::cout << "Phone number :";
    std::getline(std::cin, this->_phone_number);
    if (is_empty(this->_phone_number, "Phone number") == false)
        return (*this = contact, false);
    std::cout << "Darkest secret :";
    std::getline(std::cin, this->_darkest_secret);
    if (is_empty(this->_darkest_secret, "Darkest secret") == false)
        return (*this = contact, false);
    return (true);
}
std::string Contact::print_len(std::string info)const
{
    if (info.length() > 10)
        info = info.substr(0, 9) + ".";
    return (info);
}
void    Contact::set_index(int index)
{
    this->_index = index;
}

void    Contact::display()const
{
    std::cout << std::setw(10) << this->_index << "|";
    std::cout << std::setw(10) << this->print_len(_first_name) << "|";
    std::cout << std::setw(10) << this->print_len(_last_name) << "|";
    std::cout << std::setw(10) << this->print_len(_nickname) << "|" << std::endl;
}

void Contact::view(int i)const
{
    std::cout << "This is your contact number" << i << std::endl;
    std::cout << "First name : " << this->_first_name << std::endl;
    std::cout << "Last name : " << this->_last_name << std::endl;
    std::cout << "Nickname : " << this->_nickname << std::endl;
    std::cout << "Phone Number : " << this->_phone_number << std::endl;
    std::cout << "Darkest secret : " << this->_darkest_secret << std::endl;
}