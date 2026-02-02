#pragma once

//#include <iostream>
#include <algorithm>

/* template <typename T>
void	print_container(const T& con, std::string name)
{
	std::cout << name << ": ";
	for (typename T::const_iterator it = con.begin(); it != con.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
} */

template <typename T>
typename T::const_iterator	easyfind(const T& con, int num)
{
	return std::find(con.begin(), con.end(), num);
}
