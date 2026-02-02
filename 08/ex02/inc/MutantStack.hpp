#pragma once

#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;

		MutantStack();
		MutantStack(const MutantStack& src);
		~MutantStack();
		MutantStack&	operator=(const MutantStack& src);
		typename std::stack<T>::container_type::iterator	begin();
		typename std::stack<T>::container_type::iterator	end();
};

#include "MutantStack.tpp"
