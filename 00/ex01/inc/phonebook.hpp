#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

# define BOLD	"\x1b[1m"			// bold
# define ITALIC	"\x1b[3m"			// italic
# define RED	"\x1b[1;38;5;203m"	// vermillion bold
# define RESET	"\x1b[0m"			// reset

std::string trim(std::string s);

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		n;

	public:
		PhoneBook();
		~PhoneBook();
		void	add();
		void	search();
};

#endif