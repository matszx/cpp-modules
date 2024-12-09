#include "../inc/DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	a;
	DiamondTrap	b;

	a.printStats();
	b.printStats();
	b.attack("a bush");
	b.guardGate();
	b.highFivesGuys();
	b.whoAmI();

	return (0);
}
