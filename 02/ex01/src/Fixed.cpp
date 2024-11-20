#include "../inc/Fixed.hpp"

const int	Fixed::_fbits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(int const val)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = val << this->_fbits;
}

Fixed::Fixed(float const val)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = static_cast<int>(roundf(val * (1 << this->_fbits)));
}

Fixed::Fixed(const Fixed& f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::~Fixed(void)
{
	std::cout << "Default destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& f)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_value = f.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

int Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
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