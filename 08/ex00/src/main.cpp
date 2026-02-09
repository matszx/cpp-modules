#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include "../inc/easyfind.hpp"

int	main()
{
	int					array[] = {1, 2, 3, 4, 5};
	std::vector<int>	vec(array, array + 5);
	std::deque<int>		deq(array, array + 5);
	std::list<int>		lst(array, array + 5);

	std::cout << *easyfind(vec, 1) << std::endl;
	std::cout << *easyfind(deq, 3) << std::endl;
	std::cout << *easyfind(lst, 5) << std::endl;

	int	num = 42;
	if (easyfind(vec, num) == vec.end())
		std::cout << num << " not found" << std::endl;
	if (easyfind(deq, num) == deq.end())
		std::cout << num << " not found" << std::endl;
	if (easyfind(lst, num) == lst.end())
		std::cout << num << " not found" << std::endl;

	return 0;
}
