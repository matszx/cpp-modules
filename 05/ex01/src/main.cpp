#include "../inc/Form.hpp"

int	main()
{
	try
	{
		Bureaucrat b1("Manager", 20);
		Bureaucrat b2("Intern", 150);
		Form f("XYZ", 60, 60);

		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl << std::endl;
		std::cout << f << std::endl << std::endl;

		b2.signForm(f);
		b1.signForm(f);
	}
	catch (const std::exception& e) {std::cout << e.what() << std::endl;}
	
	return 0;
}
