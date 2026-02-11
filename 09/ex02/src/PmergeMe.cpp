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

std::vector<int>	input2vector(std::string input)
{
	std::vector<int>		c;
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

void	mergeInsertionSort(std::vector<int>& c)
{
	std::vector<int>	small;
	std::vector<int>	large;
	
	if (c.size() == 1)
		return;
	if (c.size() == 2)
	{
		if (c[0] > c[1])
		{
			int	tmp = c[0];
			c[0] = c[1];
			c[1] = tmp;
		}
		return;
	}
	std::vector<int>::iterator it = c.begin();
	if (c.size() % 2)
		it++;
	while (it != c.end())
	{
		int	tmp = *it;
		if (tmp > *(it + 1))
		{
			*it = *(it + 1);
			*(it + 1) = tmp;
		}
		it += 2;
	}
}