#include "../inc/Bureaucrat.hpp"

int	main()
{
	Bureaucrat*	intern = new Bureaucrat();

	std::cout << *intern << std::endl;
	try {
		intern->increaseGrade();
	}
	catch (std::exception& e) {
		std::cout << "Hello there" << std::endl;
	}

	delete intern;

	return 0;
}