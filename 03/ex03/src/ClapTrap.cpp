#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("ClapTrap"), _health(10), _energy(10), _damage(0)
{
	if (DEBUG)
		std::cout << DB "ClapTrap: default constructor called" RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _health(10), _energy(10), _damage(0)
{
	if (DEBUG)
		std::cout << DB "ClapTrap: name constructor called" RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	if (DEBUG)
		std::cout << DB "ClapTrap: copy constructor called" RESET << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void)
{
	if (DEBUG)
		std::cout << DB "ClapTrap: default destructor called" RESET << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& src)
{
	if (DEBUG)
		std::cout << DB "ClapTrap: assignment operator called" RESET << std::endl;
	this->_name = src._name;
	this->_health = src._health;
	this->_energy = src._energy;
	this->_damage = src._damage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << this->_name;
	if (this->_health <= 0)
		std::cout << " is destroyed and can't attack";
	else if (this->_energy <= 0)
		std::cout << " is out of energy and can't attack";
	else
		std::cout << " attacks " << target << ", causing " << this->_damage << " damage";
	std::cout << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name;
	if (this->_health <= 0)
		std::cout << " is already destroyed and can't be attacked";
	else if (this->_energy <= 0)
		std::cout << " is out of energy and can't attack";
	else
	{
		this->_health -= amount;
		std::cout << " takes " << amount << " damage";
		if (this->_health <= 0)
			std::cout << " and gets destroyed";
	}
	std::cout << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name;
	if (this->_health <= 0)
		std::cout << " is beyond repair";
	else if (this->_energy <= 0)
		std::cout << " is out of energy and can't attack";
	else
	{
		this->_energy--;
		std::cout << " gets repaired to " << (this->_health += amount) << " hp";
	}
	std::cout << std::endl;
}

void	ClapTrap::printStats(void)
{
	std::cout << this->_name << " stats: " << this->_health << " hp, " << this->_energy << " ep, " << this->_damage << " dmg" << std::endl;
}
