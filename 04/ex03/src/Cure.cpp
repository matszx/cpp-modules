#include "../inc/Cure.hpp"

Cure::Cure(): AMateria("cure") {}

Cure::Cure(const Cure& src): AMateria("cure")
{
	*this = src;
}

Cure::~Cure() {}

Cure&		Cure::operator=(const Cure& src)
{
	(void)src;
	return *this;
}

AMateria*	Cure::clone() const
{
	return new Cure;
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}