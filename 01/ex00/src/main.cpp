#include "../inc/Zombie.hpp"

int	main()
{
	Zombie	*z1;

	z1 = newZombie("Alfred");
	z1->announce();
	randomChump("Hitchcock");
	std::cout << "Anyone still there?" << std::endl;
	z1->announce();
	delete z1;
	return (0);
}