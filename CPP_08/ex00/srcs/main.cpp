#include "easyfind.hpp"


int main()
{
    std::list<int> lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    try {
    easyfind<std::list<int> >(lst, 1);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "---------------------" << std::endl;
    try {
    easyfind<std::list<int> >(lst, 5);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "---------------------" << std::endl;
    std::vector<int> vec;
    vec.push_back(0);
    vec.push_back(2);
    vec.push_back(1);
    try {
    easyfind<std::vector<int> >(vec, 1);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}