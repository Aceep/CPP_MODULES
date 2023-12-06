#include "Array.hpp"

int main()
{
    Array<int> a;
    std::cout << a.size() << std::endl;
    std::cout << &a << std::endl;
    Array<int> b(5);
    std::cout << b.size() << std::endl;
    std::cout << &b << std::endl;
    try {
        b[0] = 1;
        std::cout << b[0] << std::endl;
        std::cout << b[5] << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    Array<std::string> c(5);
    std::cout << c.size() << std::endl;
    std::cout << &c << std::endl;
    try {
        std::cout << c[0] << std::endl;
        c[1] = "Hello";
        std::cout << c[1] << std::endl;
        std::cout << c[6] << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}