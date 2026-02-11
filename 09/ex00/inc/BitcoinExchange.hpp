#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <map>
#include <cmath>
#include <exception>

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
		double	getRate(std::string date);
		void	runExchange(std::string filename);
		std::map<std::string,double>&	getTable();

	class CantOpenFile: public std::exception
	{
		const char*	what() const throw();
	};
	class FileFormatError: public std::exception
	{
		const char*	what() const throw();
	};
};
