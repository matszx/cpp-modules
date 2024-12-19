#pragma once

#include <iostream>

#define DEBUG	true

#define D	"\x1b[2;38;5;102m"
#define R	"\x1b[0m"

class Brain
{
	private:
		std::string	_ideas[100];
	public:
		Brain();
		Brain(const Brain& src);
		~Brain();
		Brain&	operator=(const Brain& src);
};