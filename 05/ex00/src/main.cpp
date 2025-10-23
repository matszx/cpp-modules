#include "../inc/Bureaucrat.hpp"

int	main()
{
	{
		try {Bureaucrat("Fabieng", 0);}
		catch (const std::exception& e) {std::cout << e.what() << std::endl;}
		try {Bureaucrat("Corenting", 151);}
		catch (const std::exception& e) {std::cout << e.what() << std::endl;}
	}
	std::cout << std::endl;
	{
		Bureaucrat b = Bureaucrat("Fabieng", 2);
		std::cout << b << std::endl;

		try {b.increaseGrade();}
		catch (const std::exception& e) {std::cout << e.what() << std::endl;}
		std::cout << b << std::endl;
		try {b.increaseGrade();}
		catch (const std::exception& e) {std::cout << e.what() << std::endl;}
	}
	std::cout << std::endl;
	{
		Bureaucrat b = Bureaucrat("Corenting", 149);
		std::cout << b << std::endl;

		try {b.decreaseGrade();}
		catch (const std::exception& e) {std::cout << e.what() << std::endl;}
		std::cout << b << std::endl;
		try {b.decreaseGrade();}
		catch (const std::exception& e) {std::cout << e.what() << std::endl;}
	}
	return 0;
}
