#include "../inc/Character.hpp"

Character::Character()
{
	_name = "Null";
	for (int i = 0; i < INV_MAX; i++)
		_inv[i] = NULL;
}

Character::Character(std::string name)
{
	_name = name;
	for (int i = 0; i < INV_MAX; i++)
		_inv[i] = NULL;
}

Character::Character(const Character& src)
{
	*this = src;
}

Character::~Character()
{
	for (int i = 0; i < INV_MAX; i++)
		delete _inv[i];
}

Character&	Character::operator=(const Character& src)
{
	_name = src._name;
	for (int i = 0; i < INV_MAX; i++)
		delete _inv[i];
	for (int i = 0; i < INV_MAX; i++)
		_inv[i] = src._inv[i]->clone();
	return *this;
}

std::string const&	Character::getName() const
{
	return _name;
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < INV_MAX; i++)
	{
		if (_inv[i] == m)
			return ;
	}
	for (int i = 0; i < INV_MAX; i++)
	{
		if (!_inv[i])
		{
			_inv[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= INV_MAX)
		_inv[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= INV_MAX && _inv[idx])
		_inv[idx]->use(target);
}