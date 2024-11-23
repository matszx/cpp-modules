#include <iostream>
#include "../inc/Fixed.hpp"
#include "../inc/Point.hpp"

int	main(void) 
{
	Point a(0, 0);
	Point b(9, 0);
	Point c(9, 9);

	std::cout << std::boolalpha << BOLD "\nTRIANGLE:" RESET<< std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << BOLD "\nBSP:" RESET << std::endl;
	{
		Point point(2, 1);
		std::cout << point << " -> " << bsp(a, b, c, point) << std::endl;
	}
	{
		Point point(4, 2);
		std::cout << point << " -> " << bsp(a, b, c, point) << std::endl;
	}
	{
		Point point(0, 0);
		std::cout << point << " -> " << bsp(a, b, c, point) << std::endl;
	}
	{
		Point point(5, 5);
		std::cout << point << " -> " << bsp(a, b, c, point) << std::endl;
	}
	{
		Point point(2, 4);
		std::cout << point << " -> " << bsp(a, b, c, point) << std::endl;
	}
	std::cout << std::endl;
	
	return (0);
}