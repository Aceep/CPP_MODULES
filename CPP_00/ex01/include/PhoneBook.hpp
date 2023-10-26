#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iomanip>
# include <cstdlib>
# include "Contact.hpp"

class PhoneBook
{
    private:
        Contact _contact[8];
        int     _index;
        bool    _full;

    public:
        PhoneBook();
        ~PhoneBook();

        void    get_information() const;
        void    set_information();
        std::string show_instruction()const;
        void   processInput();
};

#endif