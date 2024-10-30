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
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif