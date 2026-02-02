#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>
#include <exception>

class Span
{
	private:
		std::vector<int>	_vec;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span& src);
		~Span();
		void			addNumber(int num);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		void			fillSpan();
		void			print();

	class NoSpaceLeft: public std::exception
	{
		const char*	what() const throw();
	};
	class NotEnoughElements: public std::exception
	{
		const char*	what() const throw();
	};
};
