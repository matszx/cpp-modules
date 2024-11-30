#pragma once

#include "../inc/ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	private:
	// attributes
		bool	_guard;
	public:
	// constructors
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& src);
	// destructors
		virtual ~ScavTrap(void);
	// operator overload
		ScavTrap&	operator=(const ScavTrap& src);
	// methods
		void	attack(const std::string& target);
		void	guardGate(void);
};
