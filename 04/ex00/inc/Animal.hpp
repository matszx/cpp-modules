#pragma once

#include <iostream>

#define DEBUG	true

#define D	"\x1b[2;38;5;102m"
#define R	"\x1b[0m"

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(const Animal& src);
		virtual ~Animal();
		Animal&			operator=(const Animal& src);
		std::string		getType() const;
		virtual void	makeSound() const;
};