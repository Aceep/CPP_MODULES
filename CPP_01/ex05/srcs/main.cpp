#include "Harl.hpp"

int main()
{
    Harl harl;

    std::cout << "Harl complains for debug:" << std::endl;
    harl.complain("DEBUG");
    std::cout << std::endl;
    std::cout << "Harl complains for info:" << std::endl;
    harl.complain("INFO");
    std::cout << std::endl;
    std::cout << "Harl complains for error:" << std::endl;
    harl.complain("ERROR");
    std::cout << std::endl;
    std::cout << "Harl complains for warning:" << std::endl;
    harl.complain("WARNING");
    std::cout << std::endl;
    std::cout << "Harl complains for ie:" << std::endl;
    harl.complain("ie");
    std::cout << "not weird, this complain just doesn't exist" << std::endl;
    std::cout << std::endl;
    std::cout << "Harl complains for empty string:" << std::endl;
    harl.complain("");
    std::cout << "not weird, this complain just doesn't exist" << std::endl;
    return (0);
}