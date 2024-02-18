#include "easyfind.hpp"


int main(int argc, char **argv)
{
    if ( argc != 2 ) {
		std::cout << "invalid arguments" << std::endl;
		return 0;
	}

	int	arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
	std::vector<int> vect(arr ,arr  + sizeof(arr) / sizeof(int));
    std::cout << "---------------------" << std::endl;
	std::list<int> list(arr ,arr  + sizeof(arr) / sizeof(int));

	try
    {
        easyfind( vect, std::atoi( argv[1] ));
	    
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try {
        easyfind( list, std::atoi( argv[1] ));
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << "---------------------" << std::endl;
    std::list<int> lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    try {
        for (std::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
            std::cout << *it << " ";
        easyfind<std::list<int> >(lst, std::atoi( argv[1] ));
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "---------------------" << std::endl;
    try {
        for (std::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
            std::cout << *it << " ";
    easyfind<std::list<int> >(lst, std::atoi( argv[1] ));
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
        for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
            std::cout << *it << " ";
    easyfind<std::vector<int> >(vec, std::atoi( argv[1] ));
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "---------------------" << std::endl;
    try {
        for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
            std::cout << *it << " ";
    easyfind<std::vector<int> >(vec, std::atoi( argv[1] ));
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}