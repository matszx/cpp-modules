#pragma once

#include <iostream>
#include <sstream>
#include <deque>
#include <list>
#include <algorithm>
#include <ctime>

template <typename T>
void	display(const T& container)
{
	for (typename T::const_iterator it = container.begin(); it != container.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

int				checkInput(std::string input);
std::deque<int>	input2deque(std::string input);
std::list<int>	input2list(std::string input);

void			mergeInsertionSort(std::deque<int>& array);
