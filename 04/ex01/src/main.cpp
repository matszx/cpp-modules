#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

#define FORMAT	"\x1b[1;4m"
#define RESET	"\x1b[0m"

int main()
{
	std::cout << FORMAT "\nCOPY TEST:" RESET << std::endl;
	{
		Dog basic;
		{
			Dog tmp = basic;
		}
	}
	std::cout << FORMAT "\nARRAY TEST:" RESET << std::endl;
	{
		Animal*	array[100];

		for (int i = 0; i < 50; i++)
			array[i] = new Dog;
		for (int i = 50; i < 100; i++)
			array[i] = new Cat;
		for (int i = 0; i < 100; i++)
			delete array[i];
	}
	std::cout << std::endl;
	return 0;
}