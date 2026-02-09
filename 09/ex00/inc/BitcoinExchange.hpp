#pragma once

#include <iostream>
#include <map>
#include <cmath>

class BitcoinExchange:
{
	private:
		std::map<std::string, float>	_table;
		void	read_database(std::string filename);
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& src);
		~BitcoinExchange();
		BitcoinExchange&	operator=(const BitcoinExchange& src);
};
