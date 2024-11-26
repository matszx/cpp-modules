#include "../inc/ClapTrap.hpp"

int	main(void)
{
	ClapTrap a;
	ClapTrap b("Alfred");
	ClapTrap c(b);

	a.attack("Alfred");
	b.takeDamage(0);
	c.beRepaired(10);

	return (0);
}
