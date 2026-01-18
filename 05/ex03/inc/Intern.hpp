#pragma once

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern& src);
		~Intern();
		Intern&	operator=(const Intern& src);
		AForm*	makeForm(std::string name, std::string target);
};
