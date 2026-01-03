#include "../inc/A.hpp"
#include "../inc/B.hpp"
#include "../inc/C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base*	generate()
{
	switch (rand() % 3)
	{
		case 0:
			std::cout << "A generated" << std::endl;
			return new A;
		case 1:
			std::cout << "B generated" << std::endl;
			return new B;
		case 2:
			std::cout << "C generated" << std::endl;
			return new C;
		default:
			return NULL;
	}
}

void	identify(Base* p)
{
	if (!p)
		std::cout << "null" << std::endl;
	else if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return;
	}
	catch(const std::exception& e) {}
	try
	{
		dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return;
	}
	catch(const std::exception& e) {}
	try
	{
		dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return;
	}
	catch(const std::exception& e) {}
}

int	main()
{
	Base*	ptr;

	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		ptr = generate();
		identify(ptr);
		identify(*ptr);
		delete ptr;
		std::cout << std::endl;
	}
	return 0;
}
