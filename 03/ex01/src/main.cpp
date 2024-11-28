#include "../inc/ScavTrap.hpp"

int	main(void)
{
	ClapTrap a;
	ScavTrap b;

	a.attack("ScavTrap");
	b.takeDamage(20);
	b.beRepaired(20);
	b.attack("ClapTrap");
	a.takeDamage(20);
	b.guardGate();
	b.attack("ScavTrap");

	return (0);
}
