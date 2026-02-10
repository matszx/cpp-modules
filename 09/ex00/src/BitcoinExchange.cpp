#include "../inc/BitcoinExchange.hpp"

std::string	trim(std::string str)
{
	std::string::iterator begin = str.begin();
	while (begin != str.end() && isspace(*begin))
		begin++;
	std::string::iterator end = str.end();
	end--;
	while (end != begin && isspace(*end))
		end--;
	return std::string(begin, end + 1);
}

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
		throw CantOpenDatabase();
	std::getline(file, line);
	if (line != "date,exchange_rate")
		throw DatabaseFormatError();
	while (std::getline(file, line))
	{
		std::istringstream ss(line);
		std::getline(ss, key, ',');
		std::getline(ss, value);
		key = trim(key);
		value = trim(value);
		if (key.empty() || value.empty())
			throw DatabaseFormatError();
		_table[key] = atof(value.c_str());
	}
	file.close();
}

std::map<std::string,double>&	BitcoinExchange::getTable()
{
	return _table;
}

const char* BitcoinExchange::CantOpenDatabase::what() const throw()
{
	return "CantOpenDatabase";
}

const char* BitcoinExchange::DatabaseFormatError::what() const throw()
{
	return "DatabaseFormatError";
}
