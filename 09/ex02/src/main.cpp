#include "../inc/PmergeMe.hpp"

int	main(int argc, char** argv)
{
	std::string	args;

	if (argc < 2)
		return (std::cout << "Error: need 1 arg" << std::endl, 1);

	for (int i = 1; i < argc; i++)
	{
		if (checkInput(argv[i]))
			return (std::cout << "Error: bad arg" << std::endl, 1);
		args += argv[i];
		args += " ";
	}
	std::vector<int>	vec = input2vector(args);
	std::list<int>		lst = input2list(args);

	std::cout << "Before (vector): ";
	display(vec);
	std::cout << "Before (list):   ";
	display(lst);
	std::cout << std::endl;

	std::clock_t start1 = std::clock();
	mergeInsertionSortVector(vec);
	std::clock_t end1 = std::clock();
	double vector_elapsed = 1000000 * static_cast<double>(end1 - start1) / CLOCKS_PER_SEC;

	std::clock_t start2 = std::clock();
	mergeInsertionSortList(lst);
	std::clock_t end2 = std::clock();
	double list_elapsed = 1000000 * static_cast<double>(end2 - start2) / CLOCKS_PER_SEC;

	std::cout << "After (vector): ";
	display(vec);
	std::cout << "After (list):   ";
	display(lst);
	std::cout << std::endl;

	std::cout << "Time taken for vector: " << vector_elapsed << " microseconds" << std::endl;
	std::cout << "Time taken for list:   " << list_elapsed << " microsecondes" << std::endl;
	return 0;
}
