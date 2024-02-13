#include "RPN.hpp"

int main(int ac, char **av) {
    if (ac == 2) {
        RPN stac(av[1]);
        stac.process();
    }
    else 
        std::cout << "Wrong argument, try again" << std::endl;
    return (0);
}