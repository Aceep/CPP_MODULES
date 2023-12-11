#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <map>
# include <fstream>
# include <sstream>

class BitcoinExchange
{
    public:
        BitcoinExchange(const std::string & filename);
        BitcoinExchange(BitcoinExchange const & src);
        ~BitcoinExchange(void);
        BitcoinExchange &	operator=(BitcoinExchange const & rhs);
        
        void Process(const std::string & filename);

    private:
        std::map<std::string, double>	_rates;

        BitcoinExchange(void);
        double  GetExchangeRate(const std::string & date);
        bool    ValidDate(const std::string & date);
        bool    ValidAmount(const double amount);
};

#endif  // BITCOINEXCHANGE_HPP