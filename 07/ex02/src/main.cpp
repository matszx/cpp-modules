#include "../inc/Array.hpp"

int	main()
{
	Array<int>	numbers(5);
	Array<char>	letters(5);

	for (unsigned int i = 0; i < numbers.size(); i++)
		numbers[i] = i;
	for (unsigned int i = 0; i < numbers.size(); i++)
		letters[i] = i + 'A';

	std::cout << "----- CREATION -----" << std::endl;
	{
		std::cout << "numbers: ";
		for (unsigned int i = 0; i < numbers.size(); i++)
			std::cout << numbers[i] << ' ';
		std::cout << std::endl;

		std::cout << "letters: ";
		for (unsigned int i = 0; i < letters.size(); i++)
			std::cout << letters[i] << ' ';
		std::cout << std::endl << std::endl;
	}
	std::cout << "----- EMPTY ARRAY -----" << std::endl;
	{
		Array<int>	empty;

		std::cout << "&empty: " << &empty << std::endl;
		try
		{
			std::cout << empty[0] << std::endl;
		}
		catch (const std::exception& e) {std::cout << e.what() << std::endl;}
		std::cout << std::endl;
	}
	std::cout << "----- COPY CONSTRUCTOR -----" << std::endl;
	{	
		Array<int>	copy1(numbers);

		copy1[4] = 9;
		std::cout << "copy1[4] = 9" << std::endl << "copy: ";
		for (unsigned int i = 0; i < copy1.size(); i++)
			std::cout << copy1[i] << ' ';
		std::cout << std::endl;
		std::cout << "numbers: ";
		for (unsigned int i = 0; i < numbers.size(); i++)
			std::cout << numbers[i] << ' ';
		std::cout << std::endl << std::endl;
	}
	std::cout << "----- ASSIGNMENT -----" << std::endl;
	{	
		Array<int>	copy2 = numbers;

		copy2[4] = 9;
		std::cout << "copy2[4] = 9" << std::endl << "copy: ";
		for (unsigned int i = 0; i < copy2.size(); i++)
			std::cout << copy2[i] << ' ';
		std::cout << std::endl;
		std::cout << "numbers: ";
		for (unsigned int i = 0; i < numbers.size(); i++)
			std::cout << numbers[i] << ' ';
		std::cout << std::endl;
	}
	return 0;
}
