#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): _target("home") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target): _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src)
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {}
