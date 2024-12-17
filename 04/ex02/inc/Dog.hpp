#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain*		_brain;
	public:
		Dog();
		Dog(const Dog& src);
		~Dog();
		Dog&	operator=(const Dog& src);
		void	makeSound() const;
};