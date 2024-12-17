#include "../inc/Dog.hpp"

Dog::Dog(): Animal()
{
	if (DEBUG)
		std::cout << DB "Dog: default constructor called" RESET << std::endl;
	_type = "Dog";
	_brain = new Brain;
}

Dog::Dog(const Dog& src): Animal()
{
	if (DEBUG)
		std::cout << DB "Dog: copy constructor called" RESET << std::endl;
	*this = src;
}

Dog::~Dog()
{
	if (DEBUG)
		std::cout << DB "Dog: default destructor called" RESET << std::endl;
	delete _brain;
}

Dog&	Dog::operator=(const Dog& src)
{
	if (DEBUG)
		std::cout << DB "Dog: assignment operator called" RESET << std::endl;
	_type = src._type;
	*_brain = *src._brain;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}