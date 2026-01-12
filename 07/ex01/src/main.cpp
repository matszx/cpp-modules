#include <iostream>
#include "../inc/iter.hpp"


int main(void)
{
	char		arr1[] = {'h', 'e', 'l', 'l', 'o'};
	/* const char	arr2[] = {'c', 'o', 'n', 's', 't'}; */

	iter(arr1, 5, print);
	std::cout << std::endl;
	iter(arr1, 5, capitalize);
	iter(arr1, 5, print);
	std::cout << std::endl << std::endl;
	/* iter(arr2, 5, print);
	std::cout << std::endl;
	iter(arr2, 5, capitalize);
	iter(arr2, 5, print);
	std::cout << std::endl; */

	return 0;
}
