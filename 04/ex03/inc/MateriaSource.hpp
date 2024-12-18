#pragma once

#include "IMateriaSource.hpp"

#define	INV_MAX	4

class MateriaSource: public IMateriaSource
{
	private:
		AMateria*	_memory[INV_MAX];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& src);
		~MateriaSource();
		MateriaSource&	operator=(const MateriaSource& src);
		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const& type);
};