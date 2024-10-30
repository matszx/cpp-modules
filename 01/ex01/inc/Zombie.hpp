#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# define DEBUG	"\x1b[1;38;5;110m"
# define RESET	"\x1b[0m"

class Zombie
{
	private:
		std::string	_name;
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	setName(std::string name);
};

Zombie*	zombieHorde(int n, std::string name);

#endif