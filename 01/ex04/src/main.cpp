#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	if (ac != 4 || !*av[1] || !*av[2])
		return (std::cout << "error: \x1b[3m./replace [file] [s1] [s2]\x1b[0m" << std::endl, 1);
	
	std::string		s1 = av[2];
	std::string 	s2 = av[3];
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		buffer;
	size_t			i;

	infile.open(av[1]);
	outfile.open(((std::string)av[1]).append(".replace").c_str());
	if (infile.is_open() && outfile.is_open())
	{
		while (std::getline(infile, buffer))
		{
			i = 0;
			while (i < buffer.length())
			{
				if (!buffer.compare(i, s1.length(), s1))
				{
					buffer.erase(i, s1.length());
					buffer.insert(i, s2);
					i += s2.length();
				}
				i++;
			}
			outfile << buffer << std::endl;
		}
	}
	else
	{
		infile.close();
		outfile.close();
		return (std::cout << "error: can't open file" << std::endl, 1);
	}
	infile.close();
	outfile.close();
	return (0);
}