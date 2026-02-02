#include "../inc/Span.hpp"

Span::Span()
{
	_vec.reserve(0);
}

Span::Span(unsigned int n)
{
	_vec.reserve(n);
}

Span::Span(const Span& src)
{
	*this = src;
}

Span::~Span() {}

void			Span::addNumber(int num)
{
	if (_vec.size() == _vec.capacity())
		throw Span::NoSpaceLeft();
	_vec.push_back(num);
}

Span	Span::operator=(const Span& src)
{
	_vec = src._vec;
	return *this;
}

unsigned int	Span::shortestSpan()
{
	std::vector<int>	tmp = _vec;
	int					diff, min;

	if (_vec.size() < 2)
		throw Span::NotEnoughElements();
	std::sort(tmp.begin(), tmp.end());
	min = tmp[1] - tmp[0];
	for (unsigned int i = 1; i < tmp.size() - 1; i++)
	{
		diff = tmp[i+1] - tmp[i];
		if (min > diff)
			min = diff;
	}
	return min;
}

unsigned int	Span::longestSpan()
{
	std::vector<int>	tmp = _vec;

	if (_vec.size() < 2)
		throw Span::NotEnoughElements();
	std::sort(tmp.begin(), tmp.end());
	return tmp[tmp.size() - 1] - tmp[0];
}

void			Span::fillSpan()
{
	while (_vec.size() < _vec.capacity())
		addNumber(rand() % 100);
}

void			Span::print()
{
	for (std::vector<int>::iterator it = _vec.begin(); it != _vec.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

const char* Span::NoSpaceLeft::what() const throw()
{
	return "NoSpaceLeft";
}

const char* Span::NotEnoughElements::what() const throw()
{
	return "NotEnoughElements";
}
