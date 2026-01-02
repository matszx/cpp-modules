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

static int	get_type(const std::string& str)
{
	const char*	c_str = str.c_str();
	char*		useless_ptr;
	char**		c_str_end = &useless_ptr;

	if (str.empty())
		return OTHER;
	if (str.size() == 1 && !isdigit(str[0]))
		return CHAR;
	strtoll(c_str, c_str_end, 10);
	if (!**c_str_end)
		return INT;
	strtod(c_str, c_str_end);
	if (!**c_str_end)
		return DOUBLE;
	strtof(c_str, c_str_end);
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
	bool		possible = true;

	if (type == CHAR)
	{
		char_val = str[0];
		int_val = static_cast<int>(char_val);
		float_val = static_cast<float>(char_val);
		double_val = static_cast<double>(char_val);
	}
	else if (type == INT)
	{
		int_val = strtoll(c_str, NULL, 10);
		char_val = static_cast<int>(int_val);
		float_val = static_cast<float>(int_val);
		double_val = static_cast<double>(int_val);
	}
	else if (type == FLOAT)
	{
		float_val = strtof(c_str, NULL);
		char_val = static_cast<char>(float_val);
		int_val = static_cast<int>(float_val);
		double_val = static_cast<double>(float_val);
	}
	else if (type == DOUBLE)
	{
		double_val = strtod(c_str, NULL);
		char_val = static_cast<char>(double_val);
		int_val = static_cast<int>(double_val);
		float_val = static_cast<float>(double_val);
	}
	else
	{
		possible = false;
		float_val = NAN;
		double_val = NAN;
	}

	if (possible)
	{
		if (isprint(char_val))
			std::cout << "char:\t" << char_val << std::endl;
		else
			std::cout << "char:\tnon displayable" << std::endl;
	}
	else
		std::cout << "char:\timpossible" << std::endl;
	if (possible)
		std::cout << "int:\t" << int_val << std::endl;
	else
		std::cout << "int:\timpossible" << std::endl;
	std::cout << "float:\t" << float_val << "f" << std::endl;
	std::cout << "double:\t" << double_val << std::endl;
}
