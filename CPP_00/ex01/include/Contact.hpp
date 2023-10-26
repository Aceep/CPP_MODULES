#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>

class Contact
{
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;
        int _index;
    
    public:
        Contact();
        ~Contact();
        bool    create_contact();
        void    display()const;
        void    set_index(int index);
        void    view(int i)const;
        std::string print_len(std::string info)const;
        bool    is_empty(std::string str, std::string message);
};

#endif