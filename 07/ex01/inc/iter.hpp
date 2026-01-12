#pragma	once

#include <stdio.h>

template <typename T> void iter(T* array, const size_t len, void(*foo)(T&))
{
	if (array && foo)
	{
		for (size_t i = 0; i < len; i++)
			foo(array[i]);
	}
}

template <typename T> void print(T& x)
{
	std::cout << x;
}

template <typename T> void capitalize(T& x)
{
	x = toupper(static_cast<char>(x));
}
