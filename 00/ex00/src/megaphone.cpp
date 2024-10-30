#include <iostream>

int	main(int ac, char **av)
{
	int	j;

	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
			std::cout << (char)std::toupper(av[i][j++]);
	}
	std::cout << std::endl;
	return 1;
}