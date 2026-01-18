#include "../inc/Intern.hpp"

int	main()
{
	Intern intern = Intern();
	AForm*	form1 = intern.makeForm("ShrubberyCreationForm", "target1");
	AForm*	form2 = intern.makeForm("RobotomyRequestForm", "target2");
	AForm*	form3 = intern.makeForm("PresidentialPardonForm", "target3");
	AForm*	form4 = intern.makeForm("RandomForm", "target4");
	
	std::cout << std::endl;
	form1->beExecuted();
	form2->beExecuted();
	form3->beExecuted();
	if (!form4)
		std::cout << "Form is null" << std::endl;

	delete form1;
	delete form2;
	delete form3;
	delete form4;

	return 0;
}
