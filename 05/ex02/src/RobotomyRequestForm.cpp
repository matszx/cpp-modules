#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm::AForm("RobotomyRequestForm", 72, 45), _target("null") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target): _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src)
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::beExecuted()
{
	std::cout << "hello robo" << std::endl;
}
