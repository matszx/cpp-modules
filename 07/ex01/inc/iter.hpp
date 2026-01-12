#pragma	once

#include <iostream>
#include <stdio.h>

template <typename T> void iter(T* array, const size_t len, void(*foo)(const T&))
{
	if (array && foo)
	{
		for (size_t i = 0; i < len; i++)
			foo(array[i]);
	}
}

template <typename T> void printq(const T& x)
{
	std::cout << x;
}
