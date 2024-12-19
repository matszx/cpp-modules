#include "../inc/Character.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Cure.hpp"
#include "../inc/MateriaSource.hpp"

int main()
{
	IMateriaSource*	src = new MateriaSource;
	src->learnMateria(new Ice);
	src->learnMateria(new Cure);

	ICharacter*	me = new Character("me");

	AMateria*	tmp;
	std::cout << "hello" << std::endl;
	tmp = src->createMateria("ice");
	std::cout << "hello" << std::endl;
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter*	bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}