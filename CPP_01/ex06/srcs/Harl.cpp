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
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            harl_filter(i);
            return ;
        }
    }
    std::cout << "It's weird, I don't hear what Harl is saying" << std::endl;
}

void Harl::debug()
{
    std::cout << "\033[0;32m[DEBUG] = I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n\033[0m" << std::endl;
}

void Harl::info()
{
    std::cout << "\033[0;33m[INFO] It’s like you don’t care about my program at all!\n\033[0m" << std::endl;
}

void Harl::error()
{
    std::cout << "\033[1;31m[ERROR] = This is unacceptable! I want to speak to the manager now.\n\033[0m" << std::endl;
}

void Harl::warning()
{
    std::cout << "\033[2;31m[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming forears whereas you started working here since last month.\n\033[0m" << std::endl;
}

void Harl::harl_filter(int level)
{
    switch (level)
    {
       
        case    0:
           this->debug();
            __attribute__ ((fallthrough));
        case    1:
            this->info();
             __attribute__ ((fallthrough));
        case    2:
            this->warning();
             __attribute__ ((fallthrough));
        case    3:
            this->error();
            break;
        default:
            std::cout << "It's weird, Harl doesn't complain about this." << std::endl;
    }
}		
