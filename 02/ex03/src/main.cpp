#include <iostream>
#include "../inc/Fixed.hpp"

int	main(void) 
{
	{
		Fixed a;
		Fixed const b(Fixed(5.05f) * Fixed(2));

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max(a, b) << std::endl;
	}
	/* {
		Fixed a;
		Fixed b(10);
		Fixed c(42.42f);
		Fixed d(c);

		std::cout << std::boolalpha << BOLD << std::endl;
		std::cout << " a = " << a;
		std::cout << " | b = " << b;
		std::cout << " | c = " << c;
		std::cout << " | d = " << d << RESET << std::endl;

		std::cout << std::endl << BOLD UNDERLINE "COMPARISON:\n" RESET << std::endl;
		std::cout << "a < b is " << (a < b) << std::endl;
		std::cout << "c < b is " << (c < b) << std::endl;
		std::cout << "c > b is " << (c > b) << std::endl;
		std::cout << "a > b is " << (a > b) << std::endl;
		std::cout << "b <= c is " << (b <= c) << std::endl;
		std::cout << "c <= d is " << (c <= d) << std::endl;
		std::cout << "c <= b is " << (c <= b) << std::endl;
		std::cout << "c >= b is " << (c >= b) << std::endl;
		std::cout << "c >= d is " << (c >= d) << std::endl;
		std::cout << "b >= c is " << (b >= c) << std::endl;
		std::cout << "a == b is " << (a == b) << std::endl;
		std::cout << "c == d is " << (c == d) << std::endl;
		std::cout << "a != b is " << (a != b) << std::endl;
		std::cout << "c != d is " << (c != d) << std::endl;

		std::cout << std::endl << BOLD UNDERLINE "ARITHMETIC:\n" RESET << std::endl;
		std::cout << "c + b = " << c + b << std::endl;
		std::cout << "c + c = " << c + c << std::endl;
		std::cout << "c - b = " << c - b << std::endl;
		std::cout << "c - d = " << c - d << std::endl;
		std::cout << "c * b = " << c * b << std::endl;
		std::cout << "c * a = " << c * a << std::endl;
		std::cout << "c / b = " << c / b << std::endl;
		std::cout << "c / a = " << c / a << std::endl;

		std::cout << std::endl << BOLD UNDERLINE "INCREMENT/DECREMENT:\n" RESET << std::endl;
		std::cout << "a++ returns " << a++ << "\t\t->\ta = " << a << std::endl;
		std::cout << "a-- returns " << a-- << "\t->\ta = " << a << std::endl;
		std::cout << "++a returns " << ++a << "\t->\ta = " << a << std::endl;
		std::cout << "--a returns " << --a << "\t\t->\ta = " << a << std::endl;

		std::cout << std::endl << BOLD UNDERLINE "METHODS:\n" RESET << std::endl;
		std::cout << "min(a, b) = " << Fixed::min(a, b) << std::endl;
		std::cout << "max(b, c) = " << Fixed::max(b, c) << std::endl;
		std::cout << std::endl;
	} */
	return (0);
}