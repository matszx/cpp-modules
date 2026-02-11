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
	std::vector<int>	res;
	int					save = -1;
	
	(void)save;
	if (c.size() == 1)
		return;
	if (c.size() == 2)
	{
		if (c[0] > c[1])
			std::swap(c[0], c[1]);
		return;
	}
	std::vector<int>::iterator it = c.begin();
	if (c.size() % 2)
		save = *(it++);
	while (it != c.end())
	{
		small.push_back(std::min(*it, *(it + 1)));
		large.push_back(std::max(*it, *(it + 1)));
		it += 2;
	}
	mergeInsertionSort(large);
	res = large;

	for (size_t i = 0; i < small.size(); i++)
	{
		std::vector<int>::iterator	pos = res.begin();
		while (pos != res.end() && *pos <= small[i])
			pos++;
		res.insert(pos, small[i]);
	}
	if (save >= 0)
	{
		std::vector<int>::iterator	pos = res.begin();
		while (pos != res.end() && *pos <= save)
			pos++;
		res.insert(pos, save);
	}
	c = res;
}
