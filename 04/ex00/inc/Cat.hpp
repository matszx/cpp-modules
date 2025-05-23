#pragma once

#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(const Cat& src);
		~Cat();
		Cat&	operator=(const Cat& src);
		void	makeSound() const;
};