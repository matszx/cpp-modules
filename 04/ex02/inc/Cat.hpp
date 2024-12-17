#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain*		_brain;
	public:
		Cat();
		Cat(const Cat& src);
		~Cat();
		Cat&	operator=(const Cat& src);
		void	makeSound() const;
};