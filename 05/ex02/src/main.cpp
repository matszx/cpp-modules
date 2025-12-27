#include "../inc/AForm.hpp"

int	main()
{
	Bureaucrat b1 = Bureaucrat("Fabieng", 20);
	Bureaucrat b2 = Bureaucrat("Corenting", 150);
	AForm f = AForm("XYZ", 60, 60);

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl << std::endl;
	std::cout << f << std::endl << std::endl;

	b2.signAForm(f);
	b1.signAForm(f);

	return 0;
}
