#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

# define RED	"\x1b[1;38;5;203m"	// vermillion bold
# define ITALIC	"\x1b[3m"			// italic
# define RESET	"\x1b[0m"			// reset

# define CONTACT_MAX	8

std::string trim(std::string s);

class PhoneBook
{
	private:
		Contact	contacts[CONTACT_MAX];
		int		n;

	public:
		PhoneBook();
		~PhoneBook();
		void	add();
		void	search();
};

#endif