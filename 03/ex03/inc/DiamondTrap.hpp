#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
	// attributes
		std::string	_name;
	public:
	// constructors
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& src);
	// destructors
		~DiamondTrap(void);
	// operators overload
		DiamondTrap&	operator=(const DiamondTrap& src);
	// methods
		void	attack(const std::string& target);
		void	whoAmI(void);
};
