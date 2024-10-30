#include "../inc/Zombie.hpp"

int	main()
{
	Zombie	*horde;

	horde = zombieHorde(3, "Alfred");
	for (size_t i = 0; i < 3; i++)
		horde[i].announce();
	delete[] horde;
	horde = zombieHorde(10, "Hitchcock");
	for (size_t i = 0; i < 10; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}