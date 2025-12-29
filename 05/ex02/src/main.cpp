#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat b1("Big Boss", 1);
	Bureaucrat b2("Manager", 20);
	Bureaucrat b3("Intern", 150);
	ShrubberyCreationForm shrubbery("target1");
	RobotomyRequestForm robotomy("target2");
	PresidentialPardonForm pardon("target3");

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << shrubbery << std::endl;
	std::cout << robotomy << std::endl;
	std::cout << pardon << std::endl << std::endl;

	try
	{
		shrubbery.beExecuted();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	b3.signForm(pardon);
	b2.signForm(pardon);

	return 0;
}
