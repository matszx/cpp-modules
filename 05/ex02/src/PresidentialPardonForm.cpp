#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): _target("home") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target): _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src)
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm() {}
