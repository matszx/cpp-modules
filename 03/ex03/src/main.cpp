#include "../inc/DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	a;
	DiamondTrap tmp("Alfred");
	DiamondTrap b;

	b = tmp;

	a.printStats();
	a.attack("a bush");
	a.highFivesGuys();
	a.guardGate();
	a.whoAmI();
	b.whoAmI();

	return (0);
}
