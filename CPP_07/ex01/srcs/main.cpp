#include "iter.hpp"

void    print(const int &tab)
{
    std::cout << tab << std::endl;
}
void    print(const std::string &str)
{
    std::cout << str << std::endl;
}

void    print(const float &tab)
{
    std::cout << tab << std::endl;
}

int main()
{
    int tab[5] = {0, 1, 2, 3, 4};
    iter<int>(tab, 5, &print);
    std::string str = "Hello World!";
    iter<std::string>(&str, 1, &print);
    float tab2[5] = {0.0f, 1.1f, 2.2f, 3.3f, 4.4f};
    iter<float>(tab2, 5, &print);
}