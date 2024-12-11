#include "../inc/Animal.hpp"

Animal::Animal(): _type("Animal")
{
	if (DEBUG)
		std::cout << DB "Animal: default constructor called" RESET << std::endl;
}

Animal::Animal(const Animal& src)
{
	if (DEBUG)
		std::cout << DB "Animal: copy constructor called" RESET << std::endl;
	*this = src;
}

Animal::~Animal()
{
	if (DEBUG)
		std::cout << DB "Animal: default destructor called" RESET << std::endl;
}

Animal&	Animal::operator=(const Animal& src)
{
	if (DEBUG)
		std::cout << DB "Animal: assignment operator called" RESET << std::endl;
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