#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <ctime>

class Zombie
{
public:

	Zombie();
	Zombie(std::string const &type, std::string const &name);
	~Zombie();

	void announce();
	void setCharacteristics(std::string const &type, std::string const &name);
	static std::string randomName();

private:

	static	std::string zombieRandomNames[18];
	std::string type;
	std::string name;
};

#endif
