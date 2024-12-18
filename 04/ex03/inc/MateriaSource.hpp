#pragma once

#include "IMateriaSource.hpp"

#define	INV_SIZE	4

class MateriaSource: public IMateriaSource
{
	private:
		AMateria*	_memory[INV_SIZE];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& src);
		~MateriaSource();
		MateriaSource&	operator=(const MateriaSource& src);
		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const& type);
};