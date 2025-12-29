#include "../inc/Form.hpp"

int	main()
{
	Bureaucrat b1("Fabieng", 20);
	Bureaucrat b2("Corenting", 150);
	Form f("XYZ", 60, 60);

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl << std::endl;
	std::cout << f << std::endl << std::endl;

	b2.signForm(f);
	b1.signForm(f);

	return 0;
}
