#include "../inc/BitcoinExchange.hpp"

int	main(int argc, char** argv)
{
	(void)argv;
	if (argc != 2)
	{
		std::cout << "Error" << std::endl;
		return 1;
	}
	BitcoinExchange	btc;
	btc.initTable();
	std::map<std::string,double>::iterator	it;
	for (it = (btc.getTable()).begin(); it != (btc.getTable()).end(); it++)
		std::cout << it->first << " | " << it->second << std::endl;
	return 0;
}
