#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap()
{
	if (DEBUG)
		std::cout << DB "DiamondTrap: default constructor called" RESET << std::endl;
	this->_name = "DiamondTrap";
	ClapTrap::_name = this->_name + "_clap_name";
	this->_health = FragTrap::_health;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{
	if (DEBUG)
		std::cout << DB "DiamondTrap: name constructor called" RESET << std::endl;
	this->_name = name;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_health = FragTrap::_health;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src): ClapTrap(src), ScavTrap(src), FragTrap(src)
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
	ClapTrap::_name = this->_name + "_clap_name";
	this->_health = src._health;
	this->_energy = src._energy;
	this->_damage = src._damage;
	return (*this);
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << this->_name << "'s ClapTrap subobject name is " << ClapTrap::_name << std::endl;
}
