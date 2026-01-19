#include "Array.hpp"

template<class T>
Array<T>::Array(): _array(NULL), _size(0) {}

template<class T>
Array<T>::Array(unsigned int n)
{
	_array = new T[n];
	_size = n;
}

template<class T>
Array<T>::Array(const Array<T>& src)
{
	*this = src;
}

template<class T>
Array<T>::~Array()
{
	delete[] _array;
}

template<class T>
Array<T>&	Array<T>::operator=(const Array<T>& src)
{
	if (this == &src)
		return *this;
	delete[] _array;
	_size = src._size;
	_array = new T[_size];
	for (int i = 0; i < _size; i++)
		_array[i] = src._array[i];
	return *this;
}

template<class T>
T			Array<T>::operator[](const size_t index)
{
	if (index < 0 || index >= _size)
		throw Array<T>::OutOfBounds();
	return _array[index];
}

template<class T>
size_t		Array<T>::size()
{
	return _size;
}

template<class T>
const char*	Array<T>::OutOfBounds::what(void) const throw()
{
	return "Index out of bound";
}
