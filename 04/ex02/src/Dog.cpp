#include "../inc/Dog.hpp"

Dog::Dog(): Animal()
{
	if (DEBUG)
		std::cout << D "Dog: default constructor called" R << std::endl;
	_type = "Dog";
	_brain = new Brain;
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
	delete _brain;
}

Dog&	Dog::operator=(const Dog& src)
{
	if (DEBUG)
		std::cout << D "Dog: assignment operator called" R << std::endl;
	_type = src._type;
	_brain = new Brain(*(src._brain));
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}