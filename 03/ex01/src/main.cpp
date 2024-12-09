#include "../inc/ScavTrap.hpp"

int	main(void)
{
	ClapTrap a;
	ScavTrap tmp1("Alfred");
	ScavTrap tmp2(tmp1);
	ScavTrap b;

	b = tmp2;

	a.printStats();
	b.printStats();
	a.attack("ScavTrap");
	b.takeDamage(0);
	b.beRepaired(50);
	b.attack("ClapTrap");
	a.takeDamage(20);
	b.guardGate();

	return (0);
}
