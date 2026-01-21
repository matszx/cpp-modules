#pragma once

#include <iostream>
#include <stdexcept>

template<typename T>
class Array
{
	private:
		T*				_array;
		unsigned int	_size;
	public:
		Array<T>();
		Array<T>(unsigned int n);
		Array<T>(const Array<T>& src);
		~Array<T>();
		Array<T>&		operator=(const Array<T>& src);
		T&				operator[](const unsigned int index);
		unsigned int	size();
};

#include "Array.tpp"
