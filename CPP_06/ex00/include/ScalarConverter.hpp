#ifndef CONVERTER_CLASS_H
# define CONVERTER_CLASS_H

#include <cctype>
#include <charconv>
#include <cstddef>
#include <iostream>
#include <limits>
#include <sstream>
#include <stdexcept>
#include <string>

class ScalarConverter {
public:
	static void	convert(std::string const & str);
};

#endif // CONVERTER_CLASS_H