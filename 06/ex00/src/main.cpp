#include "../inc/ScalarConverter.hpp"

int	main(int argc, char** argv)
{
	if (argc != 2)
		std::cout << "Error" << std::endl;
	std::string str(argv[1]);
	ScalarConverter::convert(str);
	return 0;
}
