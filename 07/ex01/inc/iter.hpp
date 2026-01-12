#pragma	once

#include <stdio.h>

template <typename T> void iter(T* array, const size_t len, void(*f)(T& target))
{
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}

template <typename T> void iter(T* array, const size_t len, void(*f)(const T& target))
{
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}

template <typename T> void print(const T& x)
{
	std::cout << x;
}

template <typename T> void capitalize(T& x)
{
	x = toupper(x);
}
