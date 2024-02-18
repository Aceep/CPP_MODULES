#include "Span.hpp"
#include <algorithm>
#include <cstdlib>
#include <exception>
#include <iostream>

int main()
{
    Span sp = Span(5);
    try {
        std::cout << "Adding values to a Span class (6, -3, 17, 9, 11)" << std::endl;
        sp.addNumber(6);
        sp.addNumber(-3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "Trying to add a sixth value, this is not possible (should have an exception below)" << std::endl;
        sp.addNumber(5);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
    std::cout << "Shortest span (distance):";
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << "Longest :";
    std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    Span test = Span(100);
    test.addNumber();

	std::cout << std::endl << "===== Testing subject main =====" << std::endl;
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl << "===== Testing iterator range =====" << std::endl;
	{
		std::srand(time(0));
		try {
			std::list<int> list(30);
			std::generate(list.begin(), list.end(), std::rand);
			std::list<int> list2(list);
			Span spp(list2.size());
			spp.addNumber(list2, list2.size());
			//spp.print_span();
            std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "===== Testing arr range =====" << std::endl;
	{
		std::srand(time(0));
		try {
			int arr[6] = {-45, 0, 800, 15000, 6, -4846};
			Span sp(6);
			sp.addNumber(arr, 6);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "===== Testing no shortest =====" << std::endl;
	try {
		Span sp(10);
		sp.addNumber(1);
		std::cout << sp.shortestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "===== Testing no longest =====" << std::endl;
	try {
		Span sp(10);
		std::cout << sp.longestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
    return 0;
}