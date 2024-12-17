#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	if (DEBUG)
		std::cout << D "WrongAnimal: default constructor called" R << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	if (DEBUG)
		std::cout << D "WrongAnimal: copy constructor called" R << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	if (DEBUG)
		std::cout << D "WrongAnimal: default destructor called" R << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& src)
{
	if (DEBUG)
		std::cout << D "WrongAnimal: assignment operator called" R << std::endl;
	_type = src._type;
	return *this;
}

std::string	WrongAnimal::getType() const
{
	return _type;
}

void		WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal class makes no sound" << std::endl;
}