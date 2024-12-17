#include "../inc/WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	if (DEBUG)
		std::cout << D "WrongCat: default constructor called" R << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& src): WrongAnimal()
{
	if (DEBUG)
		std::cout << D "WrongCat: copy constructor called" R << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	if (DEBUG)
		std::cout << D "WrongCat: default destructor called" R << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& src)
{
	if (DEBUG)
		std::cout << D "WrongCat: assignment operator called" R << std::endl;
	_type = src._type;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}