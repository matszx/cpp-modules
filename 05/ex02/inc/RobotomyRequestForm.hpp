#pragma once

#include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm: public AForm
{
	private:
		std::string	_target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& src);
		~RobotomyRequestForm();
		void	beExecuted() const;
		RobotomyRequestForm&	operator=(const RobotomyRequestForm& src);
};
