#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	if (DEBUG)
		std::cout << DB "ScavTrap: default constrcutor called" RESET << std::endl;
	this->_name = "ScavTrap";
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 20;
	this->_guard = false;
}

ScavTrap::ScavTrap(std::string name): ClapTrap()
{
	if (DEBUG)
		std::cout << DB "ScavTrap: name constructor called" RESET << std::endl;
	this->_name = name;
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 20;
	this->_guard = false;
}

ScavTrap::ScavTrap(const ScavTrap& src): ClapTrap()
{
	if (DEBUG)
		std::cout << DB "ScavTrap: copy constructor called" RESET << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	if (DEBUG)
		std::cout << DB "ScavTrap: default destructor called" RESET << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& src)
{
	if (DEBUG)
		std::cout << DB "ScavTrap: assignment operator called" RESET << std::endl;
	this->_name = src._name;
	this->_health = src._health;
	this->_energy = src._energy;
	this->_damage = src._damage;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	std::cout << this->_name;
	if (this->_health <= 0)
		std::cout << " is destroyed and can't do anything";
	else if (this->_guard)
		std::cout << " is guarding the gate";
	else if (this->_energy <= 0)
		std::cout << " is out of energy and can't do anything";
	else
		std::cout << " fires at " << target << ", causing " << this->_damage << " damage";
	std::cout << std::endl;
}

void	ScavTrap::guardGate(void)
{
	this->_guard = true;
	std::cout << this->_name << " is now in gate keeper mode" << std::endl;
}
