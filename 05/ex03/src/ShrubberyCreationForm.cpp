#include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm::AForm("ShrubberyCreationForm", 145, 137), _target("null") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm::AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src): AForm::AForm(src)
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
	_target = src._target;
	return *this;
}

void	ShrubberyCreationForm::beExecuted() const
{
	std::ofstream	outfile;
	
	outfile.open((_target + "_shrubbery").c_str());
	if (outfile.fail())
	{
		std::cout << "Can't open file" << std::endl;
		return ;
	}
	outfile << TREE << std::endl;
	outfile.close();
	std::cout << "A tree was planted" << std::endl; 
}
