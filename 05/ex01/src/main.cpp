#include "../inc/Form.hpp"

int	main()
{
	Bureaucrat b1 = Bureaucrat("Fabieng", 20);
	Bureaucrat b2 = Bureaucrat("Corenting", 150);
	Form f = Form("XYZ", 60, 60);

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << f << std::endl;

	b1.signForm(f);
	b2.signForm(f);
	b1.signForm(f);

	return 0;
}
