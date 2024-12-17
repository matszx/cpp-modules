#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

int main()
{
	{
		Dog *dog1 = new Dog();
		Dog *dog2 = new Dog(*dog1);

		delete dog1;
		// dog2->makeSound();
		delete dog2;
	}
	/* {
		Animal*	array[100];

		for (int i = 0; i < 50; i++)
			array[i] = new Dog();
		for (int i = 50; i < 100; i++)
			array[i] = new Cat();
		for (int i = 0; i < 100; i++)
			delete array[i];
	} */
	return 0;
}