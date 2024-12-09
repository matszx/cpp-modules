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
	// operator overload
		DiamondTrap&	operator=(const DiamondTrap& src);
	// methods
		void	whoAmI(void);
};
