#pragma once

#include <algorithm>

template <typename T>
typename T::const_iterator	easyfind(const T& con, int num)
{
	return std::find(con.begin(), con.end(), num);
}
