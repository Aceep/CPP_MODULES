#include "ScalarConverter.hpp"

int     ft_stoi(const std::string &str)
{
    int i;
    std::stringstream ss(str);
    ss >> i;
    if (ss.fail() || !ss.eof())
        throw std::invalid_argument("Invalid argument");
    return (i);
}

float   ft_stof(const std::string &str)
{
    float f;
    std::stringstream ss(str);
    ss >> f;
    if (ss.fail() || !ss.eof())
        throw std::invalid_argument("Invalid argument");
    return (f);
}

double  ft_stod(const std::string &str)
{
    double d;
    std::stringstream ss(str);
    ss >> d;
    if (ss.fail() || !ss.eof())
        throw std::invalid_argument("Invalid argument");
    return (d);
}

void    ScalarConverter::convert(const std::string &str)
{
    std::cout << "char: ";
    try
    {
        char c = static_cast<char>(ft_stoi(str));
        if (std::isprint(c))
            std::cout << "'" << c << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "impossible" << std::endl;
    }
    std::cout << "int: ";
    try
    {
        int i = static_cast<int>(ft_stoi(str));
        std::cout << i << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "impossible" << std::endl;
    }
    std::cout << "float: ";
    try
    {
        float f = static_cast<float>(ft_stof(str));
        std::cout << f;
        if (f - static_cast<int>(f) == 0)
            std::cout << ".0";
        std::cout << "f" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "impossible" << std::endl;
    }
    std::cout << "double: ";
    try
    {
        double d = static_cast<double>(ft_stod(str));
        std::cout << d;
        if (d - static_cast<int>(d) == 0)
            std::cout << ".0";
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "impossible" << std::endl;
    }
}



