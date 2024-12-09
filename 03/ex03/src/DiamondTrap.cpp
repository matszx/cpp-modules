#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap(), ScavTrap(), FragTrap()
{
	if (DEBUG)
		std::cout << DB "DiamondTrap: default constructor called" RESET << std::endl;
	ClapTrap::_name = (this->_name = "DiamondTrap") + "_clap_name";
	this->_health = FragTrap::_health;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(), ScavTrap(), FragTrap()
{
	if (DEBUG)
		std::cout << DB "DiamondTrap: name constructor called" RESET << std::endl;
	this->_name = name;
	ClapTrap::_name = (this->_name = name) + "_clap_name";
	this->_health = FragTrap::_health;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src): ClapTrap(), ScavTrap(), FragTrap()
{
	if (DEBUG)
		std::cout << DB "DiamondTrap: copy constructor called" RESET << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap(void)
{
	if (DEBUG)
		std::cout << DB "DiamondTrap: default destructor called" RESET << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& src)
{
	if (DEBUG)
		std::cout << DB "DiamondTrap: assignment operator called" RESET << std::endl;
	this->_name = src._name;
	this->_health = src._health;
	this->_energy = src._energy;
	this->_damage = src._damage;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I'm " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
