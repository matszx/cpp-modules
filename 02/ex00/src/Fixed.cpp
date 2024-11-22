#include "../inc/Fixed.hpp"

const int	Fixed::_fbits = 8;

Fixed::Fixed(void): _value(0)
{
	std::cout << DEBUG "Fixed: default constructor called" RESET << std::endl;
}

Fixed::Fixed(const Fixed& f)
{
	std::cout << DEBUG "Fixed: copy constructor called" RESET << std::endl;
	*this = f;
}

Fixed::~Fixed(void)
{
	std::cout << DEBUG "Fixed: default destructor called" RESET << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& f)
{
	std::cout << DEBUG "Fixed: assignment operator called" RESET << std::endl;
	this->_value = f.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << DEBUG "Fixed: getRawBits member function called" RESET << std::endl;
	return this->_value;
}

int Fixed::setRawBits(int const raw)
{
	std::cout << DEBUG "Fixed: setRawBits member function called" RESET << std::endl;
	return this->_value = raw;
}