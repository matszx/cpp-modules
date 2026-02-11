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

static int	validateDate(std::string date)
{
	if (date.length() != 10 \
		|| !isdigit(date[0]) || !isdigit(date[1]) || !isdigit(date[2]) || !isdigit(date[3]) \
		|| date[4] != '-' || !isdigit(date[5]) || !isdigit(date[6]) \
		|| date[7] != '-' || !isdigit(date[8]) || !isdigit(date[9]))
		return 1;

	int	year = atoi(date.substr(0, 4).c_str());
	int	month = atoi(date.substr(5, 2).c_str());
	int	day = atoi(date.substr(8, 2).c_str());

	if (month > 12 || day > 31)
		return 1;
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 31)
		return 1;
	if (month == 2 && day > 28)
	{
		if (!(year % 4) && day == 29)
			return 0;
		return 1;
	}
	return 0;
}

static int	validateValueTable(std::string value)
{
	char*		endptr;
	const char*	value_c_str = value.c_str();
	double		val = strtod(value_c_str, &endptr);

	if (endptr != value_c_str + value.length())
		return 1;
	if (val < 0.0)
		return 1;
	return 0;
}

static int	handleErrorTable(std::string key, std::string value)
{
	if (key.empty() || value.empty())
		return 1;
	else if (validateDate(key))
		return 1;
	else if (validateValueTable(value))
		return 1;
	return 0;
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
		if (handleErrorTable(key, value))
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

static int	validateValueInput(std::string value)
{
	char*		endptr;
	const char*	value_c_str = value.c_str();
	double		val = strtod(value_c_str, &endptr);

	if (endptr != value_c_str + value.length())
		return 1;
	if (val < 0.0 || val > 1000.0)
		return 1;
	return 0;
}

static int	handleErrorInput(std::string key, std::string value)
{
	if (key.empty() || value.empty())
		std::cout << "Error: field empty" << std::endl;
	else if (validateDate(key))
		std::cout << "Error: date invalid" << std::endl;
	else if (validateValueInput(value))
		std::cout << "Error: value invalid" << std::endl;
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
		if (!handleErrorInput(key, value))
			std::cout << key << " => " << value << " = " << atof(value.c_str()) * getRate(key) << std::endl;
	}
	file.close();
	return 0;
}
