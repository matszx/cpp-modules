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

int	BitcoinExchange::initTable()
{
	std::ifstream		file("data.csv");
	std::string			line, key, value;

	if (!file.is_open())
		return 1;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::istringstream ss(line);
		std::getline(ss, key, ',');
		std::getline(ss, value);
		key = trim(key);
		value = trim(value);
		if (key.empty() || value.empty())
			return 1;
		_table[key] = atof(value.c_str());
	}
	file.close();
	return 0;
}

double	BitcoinExchange::getRate(std::string date)
{
	double last = _table.begin()->second;
	std::map<std::string,double>::iterator it = _table.begin();
	while (it != _table.end() && it->first <= date)
		last = (it++)->second;
	return last;
}

static int	validateDate(std::string date)
{
	int	month = atoi(date.substr(5, 2).c_str());
	int	day = atoi(date.substr(8, 2).c_str());

	if (month > 12 || day > 31)
		return 1;
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 31)
		return 1;
	if (month == 2 && day > 28)
	{
		if (day == 29 && !(atoi(date.substr(0, 4).c_str()) % 4))
			return 0;
		return 1;
	}
	return 0;
}

static int	handle_error(std::string key, std::string value)
{
	double	val = atof(value.c_str());

	if (key.empty() || value.empty())
		std::cout << "Error: empty value" << std::endl;
	else if (validateDate(key))
		std::cout << "Error: invalid date" << std::endl;
	else if (val < 0.0 || val > 1000.0)
		std::cout << "Error: value out of range" << std::endl;
	else
		return 0;
	return 1;
}

int	BitcoinExchange::runExchange(std::string filename)
{
	std::ifstream		file(filename.c_str());
	std::string			line, key, value;

	if (!file.is_open())
		return 1;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::istringstream ss(line);
		std::getline(ss, key, '|');
		std::getline(ss, value);
		key = trim(key);
		value = trim(value);
		if (!handle_error(key, value))
			std::cout << key << " => " << value << " = " << atof(value.c_str()) * getRate(key) << std::endl;
	}
	file.close();
	return 0;
}
