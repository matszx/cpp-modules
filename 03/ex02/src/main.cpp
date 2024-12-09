#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

int	main(void)
{
	ClapTrap a;
	FragTrap tmp1("Alfred");
	FragTrap tmp2(tmp1);
	FragTrap b;

	b = tmp2;

	a.printStats();
	b.printStats();
	a.attack("FragTrap");
	b.takeDamage(0);
	b.beRepaired(30);
	b.attack("ClapTrap");
	a.takeDamage(30);
	b.highFivesGuys();

	return (0);
}
