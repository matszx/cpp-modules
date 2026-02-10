#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <map>
#include <cmath>
#include <exception>

struct s_entry
{
	int	year;
	int	month;
	int	date;
	int	value;
};

class BitcoinExchange
{
	private:
		std::map<std::string,double>	_table;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& src);
		~BitcoinExchange();
		BitcoinExchange&	operator=(const BitcoinExchange& src);

		void	initTable();
		std::map<std::string,double>&	getTable();

	class CantOpenDatabase: public std::exception
	{
		const char*	what() const throw();
	};
	class DatabaseFormatError: public std::exception
	{
		const char*	what() const throw();
	};
};
