#include "../inc/BitcoinExchange.hpp"

static std::string	trim(std::string str)
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
		throw CantOpenFile();
	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::istringstream ss(line);
		std::getline(ss, key, ',');
		std::getline(ss, value);
		key = trim(key);
		value = trim(value);
		if (key.empty() || value.empty())
			throw FileFormatError();
		_table[key] = atof(value.c_str());
	}
	file.close();
}

double	BitcoinExchange::getRate(std::string date)
{
	double last = _table.begin()->second;
	std::map<std::string,double>::iterator it = _table.begin();
	while (it != _table.end() && it->first <= date)
		last = (it++)->second;
	return last;
}

static int	handle_error(std::string key, std::string value)
{
	(void)key;
	(void)value;
	return 0;
}

void	BitcoinExchange::runExchange(std::string filename)
{
	std::ifstream		file(filename.c_str());
	std::string			line, key, value;

	if (!file.is_open())
		throw CantOpenFile();
	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::istringstream ss(line);
		std::getline(ss, key, '|');
		std::getline(ss, value);
		key = trim(key);
		value = trim(value);
		if (!handle_error(key, value))
		{
			std::cout << key << " => " << value << " = ";
			std::cout << atof(value.c_str()) * getRate(key) << std::endl;
		}
	}
	file.close();
}

std::map<std::string,double>&	BitcoinExchange::getTable()
{
	return _table;
}

const char* BitcoinExchange::CantOpenFile::what() const throw()
{
	return "CantOpenFile";
}

const char* BitcoinExchange::FileFormatError::what() const throw()
{
	return "FileFormatError";
}
