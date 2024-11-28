#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

int	main(void)
{
	ClapTrap a;
	FragTrap b;


	a.attack("FragTrap");
	b.takeDamage(0);
	b.attack("ClapTrap");
	a.takeDamage(30);
	b.highFivesGuys();

	return (0);
}
