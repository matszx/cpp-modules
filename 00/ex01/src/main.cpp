#include <iostream>
#include "../inc/phonebook.hpp"

int	main() 
{
	PhoneBook	phonebook;
	std::string	input;

	while (input != "EXIT" && !std::cin.eof()) 
	{
		std::cout << "phonebook > ";
		std::getline(std::cin, input);
		if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
			phonebook.search();
	}
	return (0);
}