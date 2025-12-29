#include "../inc/RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(): AForm::AForm("RobotomyRequestForm", 72, 45), _target("null") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm::AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src): AForm::AForm(src)
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
	_target = src._target;
	return *this;
}

void	RobotomyRequestForm::beExecuted() const
{
	srand(time(NULL));
	if (rand() % 2)
		std::cout << "*BRRRRRRRRRR BRRRRRRRRRR BRRRR* " << _target << " has been robotomized" << std::endl;
	else
		std::cout << "The robotomy failed" << std::endl;
}
