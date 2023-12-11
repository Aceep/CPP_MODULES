#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./bitcoin [input]" << std::endl;
        return 1;
    }
    BitcoinExchange exchange("data.csv");
    exchange.Process(av[1]);
    return 0;
}
