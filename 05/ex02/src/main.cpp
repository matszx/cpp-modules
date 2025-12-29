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
	PresidentialPardonForm test("test target");

	std::cout << "--- INFO --------------------------" << std::endl;
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;
	std::cout << shrubbery << std::endl;
	std::cout << robotomy << std::endl;
	std::cout << pardon << std::endl << std::endl;

	std::cout << "--- EXECUTION ---------------------" << std::endl;
	b1.signForm(shrubbery);
	b1.executeForm(shrubbery);
	b1.signForm(robotomy);
	b1.executeForm(robotomy);
	b1.signForm(pardon);
	b1.executeForm(pardon);
	std::cout << std::endl << std::endl;

	std::cout << "--- EXCEPTIONS --------------------" << std::endl;
	b3.signForm(test);
	b2.executeForm(test);
	b2.signForm(test);
	b2.executeForm(test);
	b1.executeForm(test);
	std::cout << std::endl << std::endl;

	return 0;
}
