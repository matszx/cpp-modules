#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <cstdlib>

class BitcoinExchange
{
	private:
		std::map<std::string,double>	_table;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& src);
		~BitcoinExchange();
		BitcoinExchange&	operator=(const BitcoinExchange& src);
		int		initTable();
		double	getRate(std::string date);
		int		runExchange(std::string filename);
};
