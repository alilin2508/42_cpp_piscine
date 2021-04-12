#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <ctime>
#include "Zombie.hpp"

class ZombieEvent
{
public:

	ZombieEvent();
	~ZombieEvent();

	void setZombieType(std::string type);
	Zombie *newZombie(std::string name);
	Zombie *randomChump();

private:

	std::string type;
};

#endif
