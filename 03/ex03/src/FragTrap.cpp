#include "../inc/FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	if (DEBUG)
		std::cout << DB "FragTrap: default constructor called" RESET << std::endl;
	this->_name = "FragTrap";
	this->_health = 100;
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap()
{
	if (DEBUG)
		std::cout << DB "FragTrap: name constructor called" RESET << std::endl;
	this->_name = name;
	this->_health = 100;
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap::FragTrap(const FragTrap& src): ClapTrap()
{
	if (DEBUG)
		std::cout << DB "FragTrap: copy constructor called" RESET << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void)
{
	if (DEBUG)
		std::cout << DB "FragTrap: default destructor called" RESET << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& src)
{
	if (DEBUG)
		std::cout << DB "FragTrap: assignment operator called" RESET << std::endl;
	this->_name = src._name;
	this->_health = src._health;
	this->_energy = src._energy;
	this->_damage = src._damage;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->_name;
	if (this->_health <= 0)
		std::cout << " is destroyed and can't do anything";
	else
		std::cout << " asks for a high five";
	std::cout << std::endl;
}
