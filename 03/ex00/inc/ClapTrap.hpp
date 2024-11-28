#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define DEBUG	true

# define DB		"\x1b[2;38;5;102m"
# define RESET	"\x1b[0m"

class ClapTrap
{
	private:
	// attributes
		std::string	_name;
		int			_health;
		int			_energy;
		int			_damage;
	public:
	// constructors
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& src);
	// destructors
		~ClapTrap(void);
	// operators overload
		ClapTrap&	operator=(const ClapTrap& src);
	// methods
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
