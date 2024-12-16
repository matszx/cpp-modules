#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	if (DEBUG)
		std::cout << DB "WrongAnimal: default constructor called" RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	if (DEBUG)
		std::cout << DB "WrongAnimal: copy constructor called" RESET << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	if (DEBUG)
		std::cout << DB "WrongAnimal: default destructor called" RESET << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& src)
{
	if (DEBUG)
		std::cout << DB "WrongAnimal: assignment operator called" RESET << std::endl;
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