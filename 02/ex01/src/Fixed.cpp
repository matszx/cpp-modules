#include "../inc/Fixed.hpp"

const int	Fixed::_fbits = 8;

Fixed::Fixed(void)
{
	std::cout << DEBUG "Fixed: default constructor called" RESET << std::endl;
	this->_value = 0;
}

Fixed::Fixed(int const val)
{
	std::cout << DEBUG "Fixed: int constructor called" RESET << std::endl;
	this->_value = val << this->_fbits;
}

Fixed::Fixed(float const val)
{
	std::cout << DEBUG "Fixed: float constructor called" RESET << std::endl;
	this->_value = roundf(val * (1 << this->_fbits));
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

int	Fixed::toInt(void) const
{
	return this->_value >> this->_fbits;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->_value) / static_cast<float>(1 << this->_fbits);
}

std::ostream&	operator<<(std::ostream &out, const Fixed& f)
{
	return out << f.toFloat();
}