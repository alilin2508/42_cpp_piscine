#include "Replace.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
		std::cerr << "Invalid number of arguments" << std::endl;
	else
	{
		try
		{
			Replace::replace(av[1], av[2], av[3]);
		}
		catch(const char *error)
		{
			std::cerr << "Error: " << error << std::endl;
		}
	}
}
