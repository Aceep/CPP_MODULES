#include "ScalarConverter.hpp"

int     ft_stoi(const std::string &str)
{
    int i;
    std::stringstream ss(str);

    if (str.find_first_of("f.") != std::string::npos)
    {
        float f;
        ss >> f;
        i = static_cast<int>(f);
    }
    else
        ss >> i;
    return (i);
}

float   ft_stof(const std::string &str)
{
    float f;
    std::stringstream ss(str);
    ss >> f;
    return (f);
}

double  ft_stod(const std::string &str)
{
    double d;
    std::stringstream ss(str);
    ss >> d;
    return (d);
}

bool    is_a_pseudo_literal(const std::string &str)
{
    if (str == "nan")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return (true);
    }
    if (str == "+inf" || str == "inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: inff" << std::endl;
        std::cout << "double: inf" << std::endl;
        return (true);
    }
    if (str == "-inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
        return (true);
    }
    return (false);
}

void    ScalarConverter::convert(const std::string &str)
{
    if (is_a_pseudo_literal(str) == true)
        return;
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



