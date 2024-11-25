#include "../inc/Fixed.hpp"

// CONSTANTS ---------------------------------------------------------------- //

const int	Fixed::_fbits = 8;

// CONSTRUCTORS ------------------------------------------------------------- //

Fixed::Fixed(void): _value(0)
{
	if (DEBUG)
		std::cout << DB "Fixed: default constructor called" RESET << std::endl;
}

Fixed::Fixed(const Fixed& f)
{
	if (DEBUG)
		std::cout << DB "Fixed: copy constructor called" RESET << std::endl;
	*this = f;
}

// DESTRUCTORS -------------------------------------------------------------- //

Fixed::~Fixed(void)
{
	if (DEBUG)
		std::cout << DB "Fixed: default destructor called" RESET << std::endl;
}

// OPERATORS ---------------------------------------------------------------- //

Fixed&	Fixed::operator=(const Fixed& f)
{

	if (DEBUG)
		std::cout << DB "Fixed: assignment operator called" RESET << std::endl;
	this->_value = f.getRawBits();
	return (*this);
}

// METHODS ------------------------------------------------------------------ //

int Fixed::getRawBits(void) const
{
	if (DEBUG)
		std::cout << DB "Fixed: getRawBits method called" RESET << std::endl;
	return (this->_value);
}

int Fixed::setRawBits(int const raw)
{
	if (DEBUG)
		std::cout << DB "Fixed: setRawBits method called" RESET << std::endl;
	return (this->_value = raw);
}
