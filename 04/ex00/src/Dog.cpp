#include "../inc/Dog.hpp"

Dog::Dog(): Animal()
{
	if (DEBUG)
		std::cout << D "Dog: default constructor called" R << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog& src): Animal()
{
	if (DEBUG)
		std::cout << D "Dog: copy constructor called" R << std::endl;
	*this = src;
}

Dog::~Dog()
{
	if (DEBUG)
		std::cout << D "Dog: default destructor called" R << std::endl;
}

Dog&	Dog::operator=(const Dog& src)
{
	if (DEBUG)
		std::cout << D "Dog: assignment operator called" R << std::endl;
	_type = src._type;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}