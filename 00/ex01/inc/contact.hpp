#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	number;
		std::string	secret;

	public:
		Contact();
		~Contact();
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickname();
		std::string	getNumber();
		std::string	getSecret();
		void	setFirstName(const std::string);
		void	setLastName(const std::string);
		void	setNickname(const std::string);
		void	setNumber(const std::string);
		void	setSecret(const std::string);
};

#endif