#include "../inc/Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& src)
{
	*this = src;
}

Intern::~Intern() {}

Intern&	Intern::operator=(const Intern& src)
{
	(void)src;
	return *this;
}

AForm*	Intern::makeForm(std::string name, std::string target)
{
	std::string	list[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

	int	i = 0;
	while (i < 3 && name != list[i])
		i++;
	switch (i)
	{
		case 0:
			std::cout << "Intern creates " << name << std::endl;
			return new ShrubberyCreationForm(target);
		case 1:
			std::cout << "Intern creates " << name << std::endl;
			return new RobotomyRequestForm(target);
		case 2:
			std::cout << "Intern creates " << name << std::endl;
			return new PresidentialPardonForm(target);
		default:
			std::cout << "There is no form named " << name << std::endl;
			return NULL;
	}
}
