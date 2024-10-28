#include <iostream>
#include "../inc/phonebook.hpp"

PhoneBook::PhoneBook() 
{
	this->n = 0;
}

PhoneBook::~PhoneBook() {}

static std::string trim(std::string s)
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

static std::string	add_prompt(std::string s)
{
	std::string	input;

	input = "";
	while (input.empty() && !std::cin.eof())
	{
		std::cout << s << ": ";
		std::getline(std::cin, input);
		input = trim(input);
		if (input == "" && !std::cin.eof())
			std::cout << VM "Field can't be blank" RESET << std::endl;
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
	this->n++;
}

static void	display(std::string s)
{
	std::cout << RESET << ITALIC;
	if (s.length() <= 10)
	{
		for (size_t i = 10; i > s.length(); i--)
			std::cout << " ";
		std::cout << s;
	}
	else
	{
		s = s.erase(9, std::string::npos);
		std::cout << s << ".";
	}
	std::cout << RESET << PB;
}

void	PhoneBook::search() 
{
	if (this->n == 0)
		return (std::cout << VM "Phonebook empty" RESET << std::endl, void());
	std::cout << std::endl << PB;
	std::cout << "\t =========================================== " << std::endl;
	std::cout << "\t|     Index|First name| Last name|  Nickname|" << std::endl;
	std::cout << "\t|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < this->n; i++)
	{
		std::cout << "\t|         " << RESET ITALIC << i + 1 << RESET PB << "|";
		display(this->contacts[i].getFirstName());
		std::cout << "|";
		display(this->contacts[i].getLastName());
		std::cout << "|";
		display(this->contacts[i].getNickname());
		std::cout << "|" << std::endl;
	}
	std::cout << "\t =========================================== " RESET << std::endl << std::endl;
}
