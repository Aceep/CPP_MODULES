#include <iostream>

int main(int argc, char **argv)
{
    int i = 0;

    while (argc == 2 && argv[1][i])
    {
        std::cout << argv[1];
        if (!isupper(argv[1][i]))
            return (std::cout << "ERROR" << std::endl, 1);
        i ++;
    }
    std::cout << "Well done !" << argv[1] << std::endl;
    return 0;
}