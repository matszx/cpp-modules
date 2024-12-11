#include "../inc/WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	if (DEBUG)
		std::cout << DB "WrongCat: default constructor called" RESET << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& src): WrongAnimal()
{
	if (DEBUG)
		std::cout << DB "WrongCat: copy constructor called" RESET << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	if (DEBUG)
		std::cout << DB "WrongCat: default destructor called" RESET << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& src)
{
	if (DEBUG)
		std::cout << DB "WrongCat: assignment operator called" RESET << std::endl;
	_type = src._type;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}