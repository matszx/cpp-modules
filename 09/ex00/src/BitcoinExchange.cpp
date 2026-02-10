#include "../inc/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& src)
{
	*this = src;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& src)
{
	_table = src._table;
	return *this;
}

void	BitcoinExchange::initTable()
{
	std::ifstream		file("data.csv");
	std::string			line, key, value;

	if (!file.is_open())
		throw DatabaseFormatError();
	std::getline(file, line);
	if (line != "date,exchange_rate")
		throw DatabaseFormatError();
	while (std::getline(file, line))
	{
		std::istringstream ss(line);
		std::getline(ss, key, ',');
		std::getline(ss, value);
		if (key.empty() || value.empty())
			throw DatabaseFormatError();
		_table[key] = atof(value.c_str());
	}
	file.close();
}

std::map<std::string, double>&	BitcoinExchange::getTable()
{
	return _table;
}

const char* BitcoinExchange::DatabaseFormatError::what() const throw()
{
	return "DatabaseFormatError";
}
