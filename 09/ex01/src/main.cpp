#include "../inc/RPN.hpp"

int	main(int argc, char** argv)
{
	if (argc != 2)
		return (std::cout << "Error: need 1 arg" << std::endl, 1);
	std::istringstream	ss(argv[1]);
	return (RPN(ss));
}
