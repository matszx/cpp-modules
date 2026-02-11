#include "../inc/PmergeMe.hpp"

int	checkInput(std::string input)
{
	for (std::string::iterator it = input.begin(); it != input.end(); it++)
	{
		if (!isdigit(*it) && !isspace(*it))
			return 1;
	}
	return 0;
}

std::deque<int>	input2deque(std::string input)
{
	std::deque<int>		c;
	std::istringstream	ss(input);
	std::string			token;

	while (ss >> token)
		c.push_back(atoi(token.c_str()));
	return c;
}

std::list<int>	input2list(std::string input)
{
	std::list<int>		c;
	std::istringstream	ss(input);
	std::string			token;

	while (ss >> token)
		c.push_back(atoi(token.c_str()));
	return c;
}

void	mergeInsertionSort(std::deque<int>& array)
{
	std::deque<int>::iterator it;
	for (it = array.begin(); it != array.end(); it++)
	{
		int	last_val = *it;
		if (last_val > *(it + 1))
		{
			*it = *(++it);
			*it = last_val;
		}
	}
}