#pragma once

#include "../inc/ICharacter.hpp"

#define INV_SIZE	4
/* #define TRASH_SIZE	1024 */

class Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria*	_inv[INV_SIZE];
		/* AMateria*	_trash[TRASH_SIZE]; */
	public:
		Character();
		Character(std::string name);
		Character(const Character& src);
		~Character();
		Character&	operator=(const Character& src);
		std::string const&	getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};