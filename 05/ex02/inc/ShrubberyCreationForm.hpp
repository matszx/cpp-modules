#pragma once

#include "AForm.hpp"

#define TREES	"               ,@@@@@@@,\
       ,,,.   ,@@@@@@/@@,  .oo8888o.\
    ,&%%&%&&%,@@@@@/@@@@@@,8888\88/8o\
   ,%&\%&&%&&%,@@@\@@@/@@@88\88888/88'\
   %&&%&%&/%&&%@@\@@/ /@@@88888\88888'\
   %&&%/ %&%%&&@@\ V /@@' `88\8 `/88'\
   `&%\ ` /%&'    |.|        \ '|8'\
       |o|        | |         | |\
       |.|        | |         | |\
    \\/ ._\//_/__/  ,\_//__\\/.  \_//__/_"

class Bureaucrat;

class ShrubberyCreationForm: public AForm
{
	private:
		std::string	_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& src);
		~ShrubberyCreationForm();
		void	beExecuted() const;
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& src);
};
