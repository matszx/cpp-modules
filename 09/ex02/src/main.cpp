#include "../inc/PmergeMe.hpp"

int	main(int argc, char** argv)
{
	if (argc != 2)
		return (std::cout << "Error: need 1 arg" << std::endl, 1);
	if (checkInput(argv[1]))
		return (std::cout << "Error: bad arg" << std::endl, 1);

	std::vector<int>	vec = input2vector(argv[1]);
	std::list<int>		lst = input2list(argv[1]);

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
