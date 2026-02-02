#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& src): std::stack<T>(src) {}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack& src)
{
	std::stack<T>::operator=(src);
	return *this;
}

template <typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::begin()
{
	return std::stack<T>::c.begin();
}

template <typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::end()
{
	return std::stack<T>::c.end();
}
