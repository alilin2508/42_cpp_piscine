#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <ctime>
#include "Zombie.hpp"

class ZombieHorde
{
public:

	ZombieHorde(int size);
	ZombieHorde(std::string const &type, int size);
	~ZombieHorde();

	void announce();

private:

	int					size;
	std::string type;
	Zombie			*zombie;
};

#endif
