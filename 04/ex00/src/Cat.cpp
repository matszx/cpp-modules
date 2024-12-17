#include "../inc/Cat.hpp"

Cat::Cat(): Animal()
{
	if (DEBUG)
		std::cout << D "Cat: default constructor called" R << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat& src): Animal()
{
	if (DEBUG)
		std::cout << D "Cat: copy constructor called" R << std::endl;
	*this = src;
}

Cat::~Cat()
{
	if (DEBUG)
		std::cout << D "Cat: default destructor called" R << std::endl;
}

Cat&	Cat::operator=(const Cat& src)
{
	if (DEBUG)
		std::cout << D "Cat: assignment operator called" R << std::endl;
	_type = src._type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}