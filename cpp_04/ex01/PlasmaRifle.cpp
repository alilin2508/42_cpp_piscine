#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():
		AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &other): AWeapon(other)
{
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &other)
{
	this->name = other.name;
	this->apcost = other.apcost;
	this->damage = other.damage;
	return (*this);
}

PlasmaRifle::~PlasmaRifle()
{
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
