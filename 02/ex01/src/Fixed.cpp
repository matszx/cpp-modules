#include "../inc/Fixed.hpp"

// CONSTANTS ---------------------------------------------------------------- //

const int	Fixed::_fbits = 8;

// CONSTRUCTORS ------------------------------------------------------------- //

Fixed::Fixed(void)
{
	if (DEBUG)
		std::cout << DB "Fixed: default constructor called" RESET << std::endl;
	this->_value = 0;
}

Fixed::Fixed(int const val)
{
	if (DEBUG)
		std::cout << DB "Fixed: int constructor called" RESET << std::endl;
	this->_value = val << this->_fbits;
}

Fixed::Fixed(float const val)
{
	if (DEBUG)
		std::cout << DB "Fixed: float constructor called" RESET << std::endl;
	this->_value = roundf(val * (1 << this->_fbits));
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

int	Fixed::toInt(void) const
{
	return (this->_value >> this->_fbits);
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_value) / static_cast<float>(1 << this->_fbits));
}

// STREAM OVERLOAD ---------------------------------------------------------- //

std::ostream&	operator<<(std::ostream &out, const Fixed& f)
{
	return (out << f.toFloat());
}
