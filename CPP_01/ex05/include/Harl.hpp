#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <fstream>
# include <string>

class Harl
{
    public:
        Harl();
        ~Harl(void);
        void complain(std::string level);

    private:
        std::string _filename;
        void debug(void);
        void info(void);
        void error(void);
        void warning(void);
};

#endif