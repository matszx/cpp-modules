#include "../inc/Brain.hpp"

Brain::Brain()
{
	if (DEBUG)
		std::cout << DB "Brain: default constructor called" RESET << std::endl;
}

Brain::Brain(const Brain& src)
{
	if (DEBUG)
		std::cout << DB "Brain: copy constructor called" RESET << std::endl;
	*this = src;
}

Brain::~Brain()
{
	if (DEBUG)
		std::cout << DB "Brain: default destructor called" RESET << std::endl;
}

Brain&	Brain::operator=(const Brain& src)
{
	if (DEBUG)
		std::cout << DB "Brain: assignment operator called" RESET << std::endl;
	std::copy(src._ideas, src._ideas + 100, _ideas);
	return *this;
}