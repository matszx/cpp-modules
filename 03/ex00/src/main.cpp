#include "../inc/ClapTrap.hpp"

int	main(void)
{
	ClapTrap a;
	ClapTrap tmp1("Alfred");
	ClapTrap tmp2(tmp1);
	ClapTrap b = tmp2;

	a.printStats();
	a.attack("Alfred");
	b.takeDamage(0);
	b.beRepaired(10);
	b.printStats();

	return (0);
}
