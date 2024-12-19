#include "../inc/Character.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Cure.hpp"
#include "../inc/MateriaSource.hpp"

#define FORMAT	"\x1b[1;4m"
#define RESET	"\x1b[0m"

int main()
{
	std::cout << FORMAT "STOCK TEST" RESET << std::endl;
	{
		IMateriaSource*	src = new MateriaSource;
		src->learnMateria(new Ice);
		src->learnMateria(new Cure);

		ICharacter*	me = new Character("me");

		AMateria*	tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter*	bob = new Character("bob");
		
		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	/* std::cout << std::endl;

	std::cout << FORMAT "DEEP COPY TEST" RESET << std::endl;
	{
		IMateriaSource*	src = new MateriaSource;
		src->learnMateria(new Ice);
		AMateria* ice = src->createMateria("ice");

		Character* bob = new Character("bob");
		Character* copy = new Character(*bob);

		copy->equip(ice);
		copy->use(0, *bob);

		delete src;
	} */

	return 0;
}