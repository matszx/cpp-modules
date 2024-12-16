#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
	{
		const Animal* animal = new Animal();
		const Animal* cat = new Cat();
		const Animal* dog = new Dog();
		
		std::cout << cat->getType() << std::endl;
		std::cout << dog->getType() << std::endl;
		cat->makeSound();
		dog->makeSound();
		animal->makeSound();

		delete animal;
		delete cat;
		delete dog;
	}
	std::cout << std::endl;
	{
		const WrongAnimal* animal = new WrongAnimal();
		const WrongAnimal* cat = new WrongCat();
		
		std::cout << cat->getType() << std::endl;
		cat->makeSound();
		animal->makeSound();

		delete animal;
		delete cat;
	}
	return 0;
}