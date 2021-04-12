#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int size):
		size(size), type(std::string())
{
	if (size > 0)
	{
		zombie = new Zombie[size];
		for (int i = 0; i < size; i++)
			zombie[i].setCharacteristics(type, zombie->randomName());
		std::cout << "A horde of " << size << " zombies appeared !" << std::endl;
	}
	else
		std::cout << "Not enough zombies to form a horde." << std::endl;
}

ZombieHorde::ZombieHorde(std::string const &type, int size):
		size(size), type(type)
{
	if (size > 0)
	{
		zombie = new Zombie[size];
		for (int i = 0; i < size; i++)
			zombie[i].setCharacteristics(type, zombie->randomName());
		std::cout << "A horde of " << size << " " << type << " zombies appeared !" << std::endl;
	}
	else
		std::cout << "Not enough zombies to form a horde." << std::endl;
}

void ZombieHorde::announce()
{
	for (int i = 0; i < size; i++)
		zombie[i].announce();
}

ZombieHorde::~ZombieHorde()
{
	if (size != 0)
		delete[] zombie;
	std::cout << "You killed all Zombies of type " << type << "." << std::endl;
}
