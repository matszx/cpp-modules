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
	void 		(Harl::*func[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

	for (int i = 0; i < 4; i++)
		if (level == levels[i])
			return (this->*func[i])();
	std::cout << "error: undefined level -> " << level << std::endl;
}