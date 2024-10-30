#include "../inc/Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() 
{
	std::cout << DEBUG << "# debug info -> Destructor called on " << this->_name << RESET << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}