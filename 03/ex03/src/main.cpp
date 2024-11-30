#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/DiamondTrap.hpp"

int	main(void)
{
	ClapTrap 	a;
	DiamondTrap b;

	a.printStats();
	b.printStats();

	a.attack("DiamonTrap");
	b.takeDamage(0);
	b.attack("ClapTrap");
	a.takeDamage(30);
	b.highFivesGuys();
	b.whoAmI();

	return (0);
}
