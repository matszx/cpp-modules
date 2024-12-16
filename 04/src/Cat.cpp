#include "../inc/Cat.hpp"

Cat::Cat(): Animal()
{
	if (DEBUG)
		std::cout << DB "Cat: default constructor called" RESET << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat& src): Animal()
{
	if (DEBUG)
		std::cout << DB "Cat: copy constructor called" RESET << std::endl;
	*this = src;
}

Cat::~Cat()
{
	if (DEBUG)
		std::cout << DB "Cat: default destructor called" RESET << std::endl;
}

Cat&	Cat::operator=(const Cat& src)
{
	if (DEBUG)
		std::cout << DB "Cat: assignment operator called" RESET << std::endl;
	_type = src._type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}