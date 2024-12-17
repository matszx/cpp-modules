#include "../inc/Animal.hpp"

Animal::Animal(): _type("Animal")
{
	if (DEBUG)
		std::cout << D "Animal: default constructor called" R << std::endl;
}

Animal::Animal(const Animal& src)
{
	if (DEBUG)
		std::cout << D "Animal: copy constructor called" R << std::endl;
	*this = src;
}

Animal::~Animal()
{
	if (DEBUG)
		std::cout << D "Animal: default destructor called" R << std::endl;
}

Animal&	Animal::operator=(const Animal& src)
{
	if (DEBUG)
		std::cout << D "Animal: assignment operator called" R << std::endl;
	_type = src._type;
	return *this;
}

std::string	Animal::getType() const
{
	return _type;
}

void		Animal::makeSound() const
{
	std::cout << "Animal class makes no sound" << std::endl;
}