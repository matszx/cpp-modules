#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < INV_MAX; i++)
		_memory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < INV_MAX; i++)
		delete _memory[i];
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& src)
{
	for (int i = 0; i < INV_MAX; i++)
	{
		delete _memory[i];
		if (src._memory[i])
			_memory[i] = src._memory[i]->clone();
		else
			_memory[i] = NULL;
	}
	return *this;
}

void		MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < INV_MAX; i++)
	{
		if (_memory[i] == m)
			return ;
	}
	for (int i = 0; i < INV_MAX; i++)
	{
		if (!_memory[i])
		{
			_memory[i] = m;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < INV_MAX; i++)
	{
		if (_memory[i] && _memory[i]->getType() == type)
			return _memory[i]->clone();
	}
	return NULL;
}