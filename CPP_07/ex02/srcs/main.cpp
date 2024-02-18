#include "Array.hpp"
#include <iostream>
#include <climits>
#include <ctime>
#include <cstdlib>
#define MAX_VAL 750

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
    std::cout << "Test with const Array<int> d(5):" << std::endl;
    const Array<std::string> d(5);
    std::cout << d.size() << std::endl;
    std::cout << &d << std::endl;
    try {
        d[0] = "11";
        std::cout << "Write d[0]:" << d[0] << std::endl;
        std::cout << "Write d[5]:" << d[5] << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl << "===== Empty array =====" << std::endl << std::endl;
	{
		Array<float> emptyArray;
		try {
			std::cout << emptyArray[0] << std::endl;
			std::cout << emptyArray[2000] << std::endl;
		} catch (const std::exception &e){
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "===== String array =====" << std::endl << std::endl;
	{
		Array<std::string> strArray(5);
		strArray[0] = "abc";
		strArray[1] = "def";
		strArray[2] = "ghi";
		strArray[3] = "jkl";
		strArray[4] = "mno";
		try {
			for(unsigned int i = 0; i < 6; i++)
				std::cout << strArray[i] << std::endl;
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl << "===== Array copy =====" << std::endl << std::endl;
		Array<std::string> copy(strArray);
		strArray[0] = "1";
		strArray[1] = "2";
		strArray[2] = "3";
		strArray[3] = "4";
		strArray[4] = "5";
		try {
			for(unsigned int i = 0; i < 5; i++) {
				std::cout << "original :\t" << strArray[i] << std::endl;
				std::cout << "copy :\t\t" << copy[i] << std::endl;
			}
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl << "===== Assignment operator =====" << std::endl << std::endl;
		copy = strArray;
		try {
			for(unsigned int i = 0; i < 5; i++)
				std::cout << copy[i] << std::endl;
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "===== Subject test =====" << std::endl << std::endl;
	{
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++) {
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++) {
			if (mirror[i] != numbers[i]) {
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
        std::cout << "All values are the same" << std::endl;
        std::cout << "Try to access -2 range" << std::endl;
		try {
			numbers[-2] = 0;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
        std::cout << "Try to access MAX_VAL range" << std::endl;
		try {
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
		for (int i = 0; i < MAX_VAL; i++) {
			numbers[i] = rand();
		}
		delete [] mirror;
	}
    return (0);
}
