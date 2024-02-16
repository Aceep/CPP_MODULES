#include "Array.hpp"

int main()
{
    Array<int> a;
    std::cout << a.size() << std::endl;
    std::cout << "Adress a:" << &a << std::endl;
    Array<int> b(5);
    std::cout << "b size:" << b.size() << std::endl;
    std::cout << "Adress b:" << &b << std::endl;
    try {
        b[0] = 1;
        std::cout << "Write b[0]:" << b[0] << std::endl;
        std::cout << "Write b[5]:" << b[5] << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    Array<std::string> c(5);
    std::cout << c.size() << std::endl;
    std::cout << &c << std::endl;
    try {
        std::cout << "Write c[0]:" << c[0] << std::endl;
        c[1] = "Hello";
        std::cout << "Write c[1]:" << c[1] << std::endl;
        std::cout << "Write c[6]:" << c[6] << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
