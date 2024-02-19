#include "iter.hpp"

int main()
{
    int tab[5] = {0, 1, 2, 3, 4};
    iter<int>(tab, 5, &print<int>);
    std::cout << std::endl;

    std::string str = "Hello World!";
    iter<std::string>(&str, 1, &print<std::string>);
    std::cout << std::endl;

    float tab2[5] = {0.0f, 1.1f, 2.2f, 3.3f, 4.4f};
    iter<float>(tab2, 5, &print<float>);
    std::cout << std::endl;
    
    int			int_array[] = {123, 456, 789};
	iter(int_array, 3, &print<int>);
    std::cout << std::endl;
	
    std::string	str_array[] = {"abc", "def", "ghi", "jkl"};
	iter(str_array, 4, &print<std::string>);
    std::cout << std::endl;

    try {
        std::cout << "NULL array\n";
        iter<int>(NULL, 5, &print<int>);
    } catch (std::exception &e) {
        std::cerr << "NULL array" <<e.what() << std::endl;
    }
    std::cout << std::endl;
    try {
        std::cout << "Negative size: -5\n";
        iter<int>(tab, -5, &print<int>);
    } catch (std::exception &e) {
        std::cerr << "Negative size" <<e.what() << std::endl;
    }
    std::cout << std::endl;
    try {
        std::string	str_array[] = {"abc", "def", "ghi", "jkl", "arg", "afg", "arggh", "afg", "arggh"};
        iter<std::string>(str_array, 40, &print<std::string>); 
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    try {
        std::cout << "NULL function\n";
        std::string	str_array[] = {"abc", "def", "ghi", "jkl"};
        iter<std::string>(str_array, 4, NULL);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
	return 0;
}