#include "../inc/Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}

void	Harl::_debug(void)
{
	std::cout << "Harl: \x1b[3m\"I love having extra bacon!\"\x1b[0m" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "Harl: \x1b[3m\"You didn't put enough bacon in my burger!\"\x1b[0m" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "Harl: \x1b[3m\"I deserve to have some extra bacon for free.\"\x1b[0m" << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "Harl: \x1b[3m\"I want to speak to the manager.\"\x1b[0m" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	while (level != levels[i] && i < 4)
		i++;
	switch(i)
	{
		case(0):
			this->_debug();
			__attribute__ ((fallthrough));
		case(1):
			this->_info();
			__attribute__ ((fallthrough));
		case(2):
			this->_warning();
			__attribute__ ((fallthrough));
		case(3):
			this->_error();
			break;
		default:
			std::cout << "Harl: *\x1b[3mrambling*\x1b[0m" << std::endl;
	}
}