#include "../inc/ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& src)
{
	*this = src;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& src)
{
	(void)src;
	return *this;
}

ScalarConverter::~ScalarConverter() {}

/* static bool	get_num_type(const std::string& str)
{
	const char*	p = str.c_str();

	if (*p == '-' || *p == '+')
		p++;
	if (!*p)
		return OTHER;
	while (*p && *p != 'f' && *p != '.')
	{
		if (isdigit(*p))
			p++;
		else
			return OTHER;
	}
	if (!*p)
		return INT;
	if (*p == 'f' && !*(p+1))
		return FLOAT;
	if (*p != '.')
		return OTHER;
	p++;
	if (!*p)
		return OTHER;
	while (*p && *p != 'f')
	{
		if (isdigit(*p))
			p++;
		else
			return OTHER;
	}
	if (*(p-1) == '.')
		return OTHER;
	if (!*p)
		return DOUBLE;
	if (*p == 'f' && !*(p+1))
		return FLOAT;
	return OTHER;
} */

static int	get_type(const std::string& str)
{
	const char*	c_str = str.c_str();
	char*		useless_ptr;
	char**		c_str_end = &useless_ptr;

	if (str.empty())
		return OTHER;
	if (str.size() == 1 && !isdigit(str[0]))
		return CHAR;
	/* int	num_type = get_num_type(str);
	if (num_type == FLOAT || str == "-inff" || str == "+inff" || str == "nanf")
		return FLOAT;
	if (num_type == DOUBLE || str == "-inf" || str == "+inf" || str == "nan")
		return DOUBLE; */
	std::strtoll(c_str, c_str_end, 10);
	if (!**c_str_end)
		return INT;
	std::strtod(c_str, c_str_end);
	if (!**c_str_end)
		return DOUBLE;
	std::strtof(c_str, c_str_end);
	if (!**c_str_end)
		return FLOAT;
	return OTHER;
}

void	ScalarConverter::convert(const std::string& str)
{
	char		char_val;
	int			int_val;
	float		float_val;
	double		double_val;
	int			type = get_type(str);
	const char*	c_str = str.c_str();

	if (type == CHAR)
	{
		char_val = str[0];
		int_val = static_cast<int>(char_val);
		float_val = static_cast<float>(char_val);
		double_val = static_cast<double>(char_val);
	}
	else if (type == INT)
	{
		int_val = std::strtoll(c_str, NULL, 10);
		char_val = static_cast<int>(int_val);
		float_val = static_cast<float>(int_val);
		double_val = static_cast<double>(int_val);
	}
	else if (type == FLOAT)
	{
		float_val = std::strtof(c_str, NULL);
		char_val = static_cast<char>(float_val);
		int_val = static_cast<int>(float_val);
		double_val = static_cast<double>(float_val);
	}
	else if (type == DOUBLE)
	{
		double_val = std::strtod(c_str, NULL);
		char_val = static_cast<char>(double_val);
		int_val = static_cast<int>(double_val);
		float_val = static_cast<float>(double_val);
	}

	std::cout << "char: " << char_val << std::endl;
	std::cout << "int: " << int_val << std::endl;
	std::cout << "float: " << float_val << "f" << std::endl;
	std::cout << "double: " << double_val << std::endl;
}
