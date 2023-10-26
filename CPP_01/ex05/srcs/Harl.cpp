#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Oh no, a new Harl just appeared!" << std::endl;
}


Harl::~Harl(void)
{
    std::cout << "Yes, Harl is dead, but who cares?" << std::endl;
}

void Harl::complain(std::string level)
{
	void		(Harl::*ptr_complain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*ptr_complain[i])();
            return ;
        }
    }
    std::cout << "It's weird, Harl doesn't complain about this." << std::endl;
}

void Harl::debug()
{
    std::cout << "DEBUG = I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "INFO = It’s like you don’t care about my program at all!" << std::endl;
}

void Harl::error()
{
    std::cout << "ERROR = This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::warning()
{
    std::cout << "WARNING = I think I deserve to have some extra bacon for free. I’ve been coming forears whereas you started working here since last month." << std::endl;
}