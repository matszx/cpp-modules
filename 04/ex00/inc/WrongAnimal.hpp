#pragma once

#include <iostream>

#define DEBUG	true
#define DB		"\x1b[2;38;5;102m"
#define RESET	"\x1b[0m"

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& src);
		virtual ~WrongAnimal();
		WrongAnimal&	operator=(const WrongAnimal& src);
		std::string		getType() const;
		void			makeSound() const;
};