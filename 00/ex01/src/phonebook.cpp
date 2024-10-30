#include "../inc/phonebook.hpp"

std::string trim(std::string s)
{
	size_t	i;

	i = 0;
	while (std::isspace(s[i]) && i < s.length())
		i++;
	s = s.erase(0, i);
	i = s.length() - 1;
	while (std::isspace(s[i]) && i > 0)
		i--;
	s = s.erase(i + 1, std::string::npos);
	return (s);
}

PhoneBook::PhoneBook() 
{
	this->n = 0;
}

PhoneBook::~PhoneBook() {}

static std::string	add_prompt(std::string s)
{
	std::string	input;

	input = "";
	while (input.empty() && !std::cin.eof())
	{
		std::cout << s << ": ";
		std::getline(std::cin, input);
		input = trim(input);
		if (input.empty())
			std::cout << RED "Field can't be blank" RESET << std::endl;
	}
	return (input);
}

void	PhoneBook::add() 
{
	this->contacts[this->n % 8].setFirstName(add_prompt("First name"));
	this->contacts[this->n % 8].setLastName(add_prompt("Last name"));
	this->contacts[this->n % 8].setNickname(add_prompt("Nickname"));
	this->contacts[this->n % 8].setNumber(add_prompt("Phone number"));
	this->contacts[this->n % 8].setSecret(add_prompt("Darkest secret"));
	if (this->n < 8)
		this->n++;
}

static void	display(std::string s)
{
	std::cout << ITALIC;
	if (s.length() <= 10)
	{
		for (size_t i = 10; i > s.length(); i--)
			std::cout << " ";
		std::cout << s;
	}
	else
	{
		for (size_t i = 0; i < 9; i++)
			std::cout << s[i];
		std::cout << ".";
	}
	std::cout << RESET;
}

void	PhoneBook::search() 
{
	std::string	input;

	if (this->n == 0)
		return (std::cout << RED "Phonebook empty" RESET << std::endl, void());
	std::cout << " =========================================== " << std::endl;
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < this->n; i++)
	{
		std::cout << "|         " << ITALIC << i + 1 << RESET "|";
		display(this->contacts[i].getFirstName());
		std::cout << "|";
		display(this->contacts[i].getLastName());
		std::cout << "|";
		display(this->contacts[i].getNickname());
		std::cout << "|" << std::endl;
	}
	std::cout << " =========================================== " << std::endl;
	while ((input.length() != 1 || input[0] < 1 + '0' || input[0] > this->n + '0') && !std::cin.eof())
	{
		std::cout << "Index of user: ";
		std::getline(std::cin, input);
		input = trim(input);
		if (input.length() != 1 || input[0] < 1 + '0' || input[0] > this->n + '0')
			std::cout << RED "Invalid index" RESET << std::endl;
	}
	if (!std::cin.eof())
	{
		std::cout << "First name:     " << this->contacts[input[0] - '1'].getFirstName() << std::endl;
		std::cout << "Last name:      " << this->contacts[input[0] - '1'].getLastName() << std::endl;
		std::cout << "Nickname:       " << this->contacts[input[0] - '1'].getNickname() << std::endl;
		std::cout << "Phone number:   " << this->contacts[input[0] - '1'].getNumber() << std::endl;
		std::cout << "Darkest secret: " << this->contacts[input[0] - '1'].getSecret() << std::endl;
	}
}