#pragma once

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <climits>

#define OTHER	0
#define CHAR	1
#define INT		2
#define FLOAT	3
#define DOUBLE	4

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& src);
		virtual ~ScalarConverter() = 0;
		ScalarConverter&	operator=(const ScalarConverter& src);
		static void	convert(const std::string& str);
};
