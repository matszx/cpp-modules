#include <iostream>
#include <algorithm>
#include <list>
#include <time.h>
#include "../inc/MutantStack.hpp"

int main()
{
	std::cout << "----- PDF MUTANTSTACK -----" << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << std::endl << "----- PDF STD::LIST -----" << std::endl;
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}

	MutantStack<int>	s;

	srand(time(0));
	for (int i = 0; i < 10; i++)
		s.push(rand() % 100);

	std::cout << std::endl << "----- ITERATING OVER STACK -----" << std::endl;
	{
		MutantStack<int>::iterator	it = s.begin();
		while (it != s.end())
			std::cout << *(it++) << " ";
		std::cout << std::endl;
		it = s.end();
		it--;
		while (it != s.begin())
			std::cout << *(it--) << " ";
		if (it == s.begin())
			std::cout << *it << std::endl;
	}
	std::cout << std::endl << "----- STACK METHODS & MEMBERS -----" << std::endl;
	{
		MutantStack<int>	other;
		other.push(50);

		s.push(42);
		std::cout << "size: " << s.size() << "   top elem: " << s.top() << std::endl;
		s.pop();
		std::cout << "size: " << s.size() << "   top elem: " << s.top() << std::endl;
		std::cout << std::boolalpha;
		std::cout << "stack empty: " << s.empty() << std::endl;
		std::cout << "s == other : " << (s == other) << std::endl;
		std::cout << "s != other : " << (s != other) << std::endl;
		std::cout << "s < other : " << (s < other) << std::endl;
		std::cout << "s <= other : " << (s <= other) << std::endl;
		std::cout << "s > other : " << (s > other) << std::endl;
		std::cout << "s >= other : " << (s >= other) << std::endl;
		while (s.size())
			s.pop();
		std::cout << "stack empty: " << s.empty() << std::endl;
	}
	return 0;
}
