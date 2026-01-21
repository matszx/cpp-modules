#include "Array.hpp"

template<class T>
Array<T>::Array()
{
	_array = new T[0];
	_size = 0;
}

template<class T>
Array<T>::Array(unsigned int n)
{
	_array = new T[n];
	_size = n;
}

template<class T>
Array<T>::Array(const Array<T>& src)
{
	_array = NULL;
	*this = src;
}

template<class T>
Array<T>::~Array()
{
	delete[] _array;
}

template<class T>
Array<T>&		Array<T>::operator=(const Array<T>& src)
{
	if (this == &src)
		return *this;
	delete[] _array;
	_size = src._size;
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = src._array[i];
	return *this;
}

template<class T>
T&				Array<T>::operator[](const unsigned int index)
{
	if (index >= _size)
		throw std::out_of_range("Index out of range");
	return _array[index];
}

template<class T>
unsigned int	Array<T>::size()
{
	return _size;
}
