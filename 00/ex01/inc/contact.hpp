#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

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
		void	setFirstName(std::string);
		void	setLastName(std::string);
		void	setNickname(std::string);
		void	setNumber(std::string);
		void	setSecret(std::string);
};

#endif
