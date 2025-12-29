#include "../inc/PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat b1("Fabieng", 20);
	Bureaucrat b2("Corenting", 150);
	PresidentialPardonForm pardon("home");

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl << std::endl;
	std::cout << pardon << std::endl << std::endl;

	b2.signForm(pardon);
	b1.signForm(pardon);

	return 0;
}
