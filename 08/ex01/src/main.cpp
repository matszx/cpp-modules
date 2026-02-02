#include <iostream>
#include "../inc/Span.hpp"

int main()
{
	srand(time(0));
	std::cout << "----- PDF TEST -----" << std::endl;
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "----- NORMAL SPAN -----" << std::endl;
	{
		Span	sp = Span(5);

		sp.fillSpan();
		sp.print();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "----- EMPTY SPAN -----" << std::endl;
	{
		Span	sp = Span(5);

		try
		{
			sp.shortestSpan();
		}
		catch (const std::exception& e) {std::cout << e.what() << std::endl;}
		sp.fillSpan();
		std::cout << sp.shortestSpan() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "----- NO SPACE LEFT -----" << std::endl;
	{
		Span	sp = Span(5);

		sp.fillSpan();
		try
		{
			sp.addNumber(1);
		}
		catch (const std::exception& e) {std::cout << e.what() << std::endl;}
	}
	std::cout << std::endl;
	std::cout << "----- NOT ENOUGH ELEMENTS -----" << std::endl;
	{
		Span	sp1 = Span(0);
		Span	sp2 = Span(1);

		sp1.fillSpan();
		sp2.fillSpan();
		try
		{
			sp1.shortestSpan();
		}
		catch (const std::exception& e) {std::cout << e.what() << std::endl;}
		try
		{
			sp2.longestSpan();
		}
		catch (const std::exception& e) {std::cout << e.what() << std::endl;}
	}
	std::cout << std::endl;
	std::cout << "----- BIG SPAN -----" << std::endl;
	{
		Span	sp = Span(10000);
		sp.fillSpan();
		//sp.print();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	return 0;
}
