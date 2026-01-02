#pragma once

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <limits>

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
		virtual ~ScalarConverter();
		ScalarConverter&	operator=(const ScalarConverter& src);
		static void	convert(const std::string& str);
};
