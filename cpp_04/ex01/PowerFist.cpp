#include "PowerFist.hpp"

PowerFist::PowerFist():
		AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist const &other): AWeapon(other)
{
}

PowerFist &PowerFist::operator=(PowerFist const &other)
{
	this->name = other.name;
	this->apcost = other.apcost;
	this->damage = other.damage;
	return (*this);
}

PowerFist::~PowerFist()
{
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
