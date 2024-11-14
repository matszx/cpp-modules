#include "../inc/contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

std::string	Contact::getFirstName() 
{
	return (this->first_name);
}

std::string	Contact::getLastName() 
{
	return (this->last_name);
}

std::string	Contact::getNickname() 
{
	return (this->nickname);
}

std::string	Contact::getNumber() 
{
	return (this->number);
}

std::string	Contact::getSecret() 
{
	return (this->secret);
}

void	Contact::setFirstName(const std::string s) 
{
	this->first_name = s;
}

void	Contact::setLastName(const std::string s) 
{
	this->last_name = s;
}

void	Contact::setNickname(const std::string s) 
{
	this->nickname = s;
}

void	Contact::setNumber(const std::string s) 
{
	this->number = s;
}

void	Contact::setSecret(const std::string s) 
{
	this->secret = s;
}