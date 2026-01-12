#include <iostream>
#include "../inc/iter.hpp"


int main(void)
{
	char	arr[] = {'h', 'e', 'l', 'l', 'o'};

	iter<char>(arr, 5, print);
	std::cout << std::endl;
	iter<char>(arr, 5, capitalize);
	iter<char>(arr, 5, print);
	std::cout << std::endl;

	return 0;
}
