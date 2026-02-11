#include "../inc/PmergeMe.hpp"

int	main(int argc, char** argv)
{
	if (argc != 2)
		return (std::cout << "Error: need 1 arg" << std::endl, 1);
	if (checkInput(argv[1]))
		return (std::cout << "Error: bad arg" << std::endl, 1);
	std::deque<int> deq = input2deque(argv[1]);
	std::list<int>	lst = input2list(argv[1]);
	display(deq);
	display(lst);
	return 0;
}
