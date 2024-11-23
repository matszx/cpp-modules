#include "../inc/Fixed.hpp"

// CONSTANTS ---------------------------------------------------------------- //

const int	Fixed::_fbits = 8;

// CONSTRUCTORS ------------------------------------------------------------- //

Fixed::Fixed(void)
{
	if (DEBUG)
		std::cout << DC "Fixed: default constructor called" RESET << std::endl;
	this->_value = 0;
}

Fixed::Fixed(int const val)
{
	if (DEBUG)
		std::cout << DC "Fixed: int constructor called" RESET << std::endl;
	this->_value = val << this->_fbits;
}

Fixed::Fixed(float const val)
{
	if (DEBUG)
		std::cout << DC "Fixed: float constructor called" RESET << std::endl;
	this->_value = roundf(val * (1 << this->_fbits));
}

Fixed::Fixed(const Fixed& f)
{
	if (DEBUG)
		std::cout << DC "Fixed: copy constructor called" RESET << std::endl;
	*this = f;
}

// DESTRUCTORS -------------------------------------------------------------- //

Fixed::~Fixed(void)
{
	if (DEBUG)
		std::cout << DC "Fixed: default destructor called" RESET << std::endl;
}

// OPERATORS ---------------------------------------------------------------- //

Fixed&	Fixed::operator=(const Fixed& f)
{
	if (DEBUG)
		std::cout << DC "Fixed: assignment operator called" RESET << std::endl;
	this->_value = f.getRawBits();
	return (*this);
}

bool	Fixed::operator<(const Fixed& f)
{
	return (this->toFloat() < f.toFloat());
}

bool	Fixed::operator>(const Fixed& f)
{
	return (this->toFloat() > f.toFloat());
}

bool	Fixed::operator<=(const Fixed& f)
{
	return (this->toFloat() <= f.toFloat());
}

bool	Fixed::operator>=(const Fixed& f)
{
	return (this->toFloat() >= f.toFloat());
}

bool	Fixed::operator==(const Fixed& f)
{
	return (this->toFloat() == f.toFloat());
}

bool	Fixed::operator!=(const Fixed& f)
{
	return (this->toFloat() != f.toFloat());
}

float	Fixed::operator+(const Fixed& f)
{
	return (this->toFloat() + f.toFloat());
}

float	Fixed::operator-(const Fixed& f)
{
	return (this->toFloat() - f.toFloat());
}

float	Fixed::operator*(const Fixed& f)
{
	return (this->toFloat() * f.toFloat());
}

float	Fixed::operator/(const Fixed& f)
{
	return (this->toFloat() / f.toFloat());
}

Fixed	Fixed::operator++(int)
{
	Fixed res = *this;
	this->_value++;
	return (res);
}

Fixed	Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed res = *this;
	this->_value--;
	return (res);
}

Fixed	Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

// GETTERS ------------------------------------------------------------------ //

int Fixed::getRawBits(void) const
{
	if (DEBUG)
		std::cout << DC "Fixed: getRawBits member function called" RESET << std::endl;
	return (this->_value);
}

// SETTERS ------------------------------------------------------------------ //

int Fixed::setRawBits(int const raw)
{
	if (DEBUG)
		std::cout << DC "Fixed: setRawBits member function called" RESET << std::endl;
	return (this->_value = raw);
}

// METHODS ------------------------------------------------------------------ //

int	Fixed::toInt(void) const
{
	return (this->_value >> this->_fbits);
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_value) / static_cast<float>(1 << this->_fbits));
}

Fixed&	Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1._value < f2._value)
		return (f1);
	else
		return (f2);
}

Fixed&	Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1._value > f2._value)
		return (f1);
	else
		return (f2);
}

const Fixed&	Fixed::min(const Fixed& f1, const Fixed& f2)
{
	if (f1._value < f2._value)
		return (f1);
	else
		return (f2);
}

const Fixed&	Fixed::max(const Fixed& f1, const Fixed& f2)
{
	if (f1._value > f2._value)
		return (f1);
	else
		return (f2);
}

// STREAM OVERLOAD ---------------------------------------------------------- //

std::ostream&	operator<<(std::ostream &out, const Fixed& f)
{
	return (out << f.toFloat());
}