#include "../inc/Brain.hpp"

Brain::Brain()
{
	if (DEBUG)
		std::cout << D "Brain: default constructor called" R << std::endl;
}

Brain::Brain(const Brain& src)
{
	if (DEBUG)
		std::cout << D "Brain: copy constructor called" R << std::endl;
	*this = src;
}

Brain::~Brain()
{
	if (DEBUG)
		std::cout << D "Brain: default destructor called" R << std::endl;
}

Brain&	Brain::operator=(const Brain& src)
{
	if (DEBUG)
		std::cout << D "Brain: assignment operator called" R << std::endl;
	std::copy(src._ideas, src._ideas + 100, _ideas);
	return *this;
}