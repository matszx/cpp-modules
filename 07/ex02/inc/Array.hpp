#pragma once

#include <iostream>
#include <cstddef>

template<typename T>
class Array
{
	private:
		T*		_array;
		size_t	_size;
	public:
		Array<T>();
		Array<T>(unsigned int n);
		Array<T>(const Array<T>& src);
		~Array<T>();
		Array<T>&	operator=(const Array<T>& src);
		T			operator[](const size_t index);
		size_t	size();
	
	class OutOfBounds: public std::exception
	{
		public:
			virtual const char*	what() const throw();
	};
};

#include "Array.tpp"
