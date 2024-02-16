#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return (1);
    } 
    ScalarConverter sc = ScalarConverter();
    sc.convert(argv[1]);
    return (0);
}