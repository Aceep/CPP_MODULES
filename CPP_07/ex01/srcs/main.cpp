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

	return 0;
}