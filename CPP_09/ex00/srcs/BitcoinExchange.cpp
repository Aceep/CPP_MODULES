#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string & filename)
{
	std::ifstream   file(filename.c_str());
	std::string     line;

	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::string::size_type pos = line.find(',');
		if (pos == std::string::npos)
		{
			std::cout << "Invalid line: " << line << std::endl;
			continue;
		}
		std::string date = line.substr(0, pos);
		std::string rate_str = line.substr(pos + 1);

		double rate;
		std::istringstream rate_double(rate_str);
		if (!(rate_double >> rate))
		{
			std::cout << "Invalid rate: " << rate << std::endl;
			continue;
		}
		_rates[date] = rate;
	}
}	

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src)
{
	*this = src;
}

BitcoinExchange::~BitcoinExchange(void)
{
}

BitcoinExchange &	BitcoinExchange::operator=(BitcoinExchange const & rhs)
{
	if (this != &rhs)
	{
		_rates = rhs._rates;
	}
	return *this;
}

double	BitcoinExchange::GetExchangeRate(const std::string & date)
{
	std::map<std::string, double>::iterator it = _rates.lower_bound(date);

	if (it->first != date && it != _rates.begin())
		it--;
	
	if (it->first == date)
		return it->second;
	else if (!it->first.empty())
		return it->second;
	return -1.0;
}

bool BitcoinExchange::ValidDate(const std::string & date)
{
	std::string::size_type pos = date.find('-');
	std::string::size_type pos2 = date.find('-', pos + 1);

	if (pos == std::string::npos || pos2 == std::string::npos)
		return false;

	std::string year_str = date.substr(0, pos);
	std::string month_str = date.substr(pos + 1, pos2 - pos - 1);
	std::string day_str = date.substr(pos2 + 1);

	int year, month, day;
	std::istringstream year_ss(year_str), month_ss(month_str), day_ss(day_str);
	if (!(year_ss >> year) || !(month_ss >> month) || !(day_ss >> day))
		return false;

	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
		return false;
	
	//Check for 30 days
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return false;

	//Check for February
	if (month == 2)
	{
		if (day > 29)
			return false;
		if (day == 29)
		{
			if (year % 4 != 0)
				return false;
			if (year % 100 == 0 && year % 400 != 0)
				return false;
		}
	}
	return true;
}

bool BitcoinExchange::ValidAmount(const double amount)
{
	if (amount < 0 || amount > 1000000)
	{
		std::cout << "Invalid amount: " << amount << std::endl;
		return false;
	}
	return true;
}

void	BitcoinExchange::Process(const std::string & filename)
{
	std::ifstream   file(filename.c_str());
	std::string     line;

	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::string::size_type pos = line.find('|');
		if (pos == std::string::npos)
		{
			std::cout << "Invalid line : incorrect format" << std::endl;
			continue;
		}
		std::string date = line.substr(0, pos);
		std::string amount_str = line.substr(pos + 1);

		double amount;
		std::istringstream amount_double(amount_str);
		if (!(amount_double >> amount))
		{
			std::cout << "Invalid amount: " << amount << std::endl;
			continue;
		}
		if (!ValidDate(date))
		{
			std::cout << "Invalid date: " << date << std::endl;
			continue;
		}
		if (!ValidAmount(amount))
			continue;
		double rate = GetExchangeRate(date);
		if (rate == 0)
		{
			std::cout << "No exchange rate for date: " << date << std::endl;
			continue;
		}
		std::cout << date << ": " << amount << " rate : "  << rate <<" BTC = " << amount * rate << std::endl;
	}
}
