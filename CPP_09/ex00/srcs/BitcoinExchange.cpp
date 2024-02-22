#include "BitcoinExchange.hpp"
#include <list>

//Contructors and destructors
BitcoinExchange::BitcoinExchange() {
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & cpy) {
	*this = cpy;
}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange const & rhs) {
	if (this != &rhs)
		_btcPrices = rhs._btcPrices;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {
}

//Exeception definitions
const char* BitcoinExchange::invalidFormat::what(void) const throw() {
	return "invalid format";
}

const char* BitcoinExchange::invalidDate::what(void) const throw() {
	return "bad input : invalid date.";
}

const char* BitcoinExchange::qtyNegative::what(void) const throw() {
	return "not a positive number.";
}

const char* BitcoinExchange::qtyTooLarge::what(void) const throw() {
	return "too large a number.";
}

const char* BitcoinExchange::dataFileCorrupted::what(void) const throw() {
	return "Data file corrupted.";
}

//Member functions
void	BitcoinExchange::fillData(std::string dataFile)
{
	std::ifstream	file(dataFile.c_str());
	if (!file.is_open())
		throw std::runtime_error("Data file not found");
	
	std::string	line;
	std::string	date;
	int			limPos;
	double		value;

	std::getline(file, line);
	while (std::getline(file, line)) {
		limPos = line.find(",");
		if (limPos != 10)
			throw dataFileCorrupted();
		date = line.substr(0, limPos);
		std::string	rate = line.substr(limPos + 1, line.length() - limPos - 1);
		std::istringstream	iss(rate);

		if (!(iss >> value) || !iss.eof() || value < 0) 
			throw dataFileCorrupted();
		this->_btcPrices[date] = value;
	}
	if (this->_btcPrices.empty())
		throw dataFileCorrupted();
}

static bool	is_number(const std::string& s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it))
		++it;
	return !s.empty() && it == s.end();
}

int		ft_stoi(std::string const & s)
{
	int		i = 0;
	int		n = 0;
	int		sign = 1;

	if (s[i] == '-') {
		sign = -1;
		i++;
	}
	while (s[i] != '\0') {
		if (s[i] < '0' || s[i] > '9')
			throw std::invalid_argument("stoi");
		n = n * 10 + s[i] - '0';
		i++;
	}
	return n * sign;
}

static bool	validDate(std::string const & date)
{
	if (date.length() != 10)
		return false;
	if (date[4] != '-' || date[7] != '-')
		return false;
	if (!is_number(date.substr(0, 4)) || !is_number(date.substr(5, 2)) || !is_number(date.substr(8, 2)))
		return false;
	if (ft_stoi(date.substr(5, 2)) < 1 || ft_stoi(date.substr(5, 2)) > 12)
		return false;
	if (ft_stoi(date.substr(0, 4)) < 1950 || ft_stoi(date.substr(0, 4)) > 2024)
		return false;
	int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
	if (ft_stoi(date.substr(0, 4)) % 4 == 0 && (ft_stoi(date.substr(0, 4)) % 100 != 0 || ft_stoi(date.substr(0, 4)) % 400 == 0))
		daysInMonth[1] = 29;
	if (ft_stoi(date.substr(8, 2)) < 1 || ft_stoi(date.substr(8, 2)) > daysInMonth[ft_stoi(date.substr(5, 2)) - 1])
		return false;
	return true;
}

double	BitcoinExchange::findPrice(std::string const & date)
{
	std::map<std::string, double>::iterator it = _btcPrices.begin();
	if (it->first > date)
		throw invalidDate();
	while (it != _btcPrices.end()) {
		if (it->first >= date)
			return (--it)->second;
		it++;
	}
	return (--it)->second;
}

void	BitcoinExchange::processFile(char* inputFileName)
{
	std::ifstream	file(inputFileName);
	if (!file.is_open())
		throw std::runtime_error("Input file not found");

	std::string		line;
	std::string		date;
	int				limPos;
	double			price;

	std::string		sQty;
	double			qty;


	std::getline(file, line);
	while (std::getline(file, line)) {
		try {
			if (line.empty())
				continue;
			limPos = line.find(" | ");
			if (limPos != 10)
				throw invalidFormat();

			date = line.substr(0, limPos);
			if (!validDate(date))
				throw invalidDate();

			price = findPrice(date);

			sQty = line.substr(limPos + 3, line.length() - limPos - 3);
			std::istringstream	iss(sQty);
			if (!(iss >> qty) || !iss.eof() || qty < 0)
				throw invalidFormat();
			if (qty < 0)
				throw qtyNegative();
			if (qty > 1000)
				throw qtyTooLarge();
			std::cout << date << " => " << qty << " = " << qty * price << std::endl;
		}
		catch (invalidDate & e) {
			std::cout << "Error: " << e.what() << " [" << date << "]" << std::endl;
		}
		catch (std::exception & e) {
			std::cout << "Error: " << e.what() << "." << std::endl;
		}
	}
}