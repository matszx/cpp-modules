#pragma once

#include "../inc/ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
	// constructors
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap& src);
	// destructors
		virtual ~FragTrap(void);
	// operator overload
		FragTrap&	operator=(const FragTrap& src);
	// methods
		void	highFivesGuys(void);
};
