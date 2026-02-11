#include "../inc/BitcoinExchange.hpp"

int	main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "Error" << std::endl;
		return 1;
	}
	BitcoinExchange	btc;
	if (btc.initTable() || btc.runExchange(argv[1]))
		return (std::cout << "File error" << std::endl, 1);
	return 0;
}
