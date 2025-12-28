#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm::AForm("PresidentialPardonForm", 25, 5), _target("null") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target): _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src)
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::beExecuted() const
{
	std::cout << _target << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}
