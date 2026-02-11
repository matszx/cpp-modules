#include "../inc/BitcoinExchange.hpp"

int	main(int argc, char** argv)
{
	if (argc != 2)
		return (std::cout << "Error: need 1 arg" << std::endl, 1);
	BitcoinExchange	btc;
	if (btc.initTable())
		return (std::cout << "Database error" << std::endl, 1);
	if (btc.runExchange(argv[1]))
		return (std::cout << "File error" << std::endl, 1);
	return 0;
}
