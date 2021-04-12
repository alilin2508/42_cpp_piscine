#include "Convert.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		return (1);
	}
	if (atof(av[1]) == 0 && *av[1] != '0')
	{
		std::cout << "Error: Not a Number" << std::endl;
		return (1);
	}
	Convert conv(std::atof(av[1]), Convert::getPrecision(av[1]));
	conv.convert();
	return (0);
}
