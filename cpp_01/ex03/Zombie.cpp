#include "Zombie.hpp"

std::string Zombie::zombieRandomNames[18] = {
			"Adélaïde",
			"Adrien",
			"Aglaé",
			"Aimée",
			"Albane",
			"Alex",
			"Alexandrine",
			"Alfred",
			"Aline",
			"Amandine",
			"Amélie",
			"Andrée",
			"Angeline",
			"Alice",
			"Gabriel",
			"Tom",
			"Valentin",
			"Hugo"
};

Zombie::Zombie():
		type(std::string()), name(std::string())
{
}

Zombie::Zombie(std::string const &type, std::string const &name):
		type(type), name(name)
{
	std::cout << "A new " << type << " zombie named " << name << " appeared, be carefull !" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "You just headshot " << name << " !" << std::endl;
}

void Zombie::announce()
{
	std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss ..." << std::endl;
}

void Zombie::setCharacteristics(std::string const &type, std::string const &name)
{
	this->type = type;
	this->name = name;
	std::cout << "A new " << type << " zombie named " << name << " appeared, be carefull !" << std::endl;
}

std::string Zombie::randomName()
{
	int idx;

	system("sleep 1");
	srand((unsigned) time(0));
	idx = rand() % 18;
	return (zombieRandomNames[idx]);
}
