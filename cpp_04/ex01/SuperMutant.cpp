#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &other): Enemy(other)
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &other)
{
	this->hp = other.hp;
	this->type = other.type;
	return (*this);
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}
