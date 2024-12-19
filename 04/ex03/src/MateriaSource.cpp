#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i; i < INV_MAX; i++)
		_memory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for (int i; i < INV_MAX; i++)
		delete _memory[i];
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& src)
{
	for (int i = 0; i < INV_MAX; i++)
		delete _memory[i];
	for (int i = 0; i < INV_MAX; i++)
		_memory[i] = src._memory[i]->clone();
	return *this;
}

void		MateriaSource::learnMateria(AMateria* m)
{
	int	i = 0;

	while (i < INV_MAX && _memory[i])
		i++;
	if (i < INV_MAX)
		_memory[i] = m;
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < INV_MAX; i++)
	{
		if (_memory[i] != NULL && _memory[i]->getType() == type)
			return _memory[i]->clone();
	}
	return NULL;
}