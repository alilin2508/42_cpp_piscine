#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage):
		name(name), apcost(apcost), damage(damage)
{
}

AWeapon::AWeapon(AWeapon const &other)
{
	this->name = other.name;
	this->apcost = other.apcost;
	this->damage = other.damage;
}

AWeapon &AWeapon::operator=(AWeapon const &other)
{
	this->name = other.name;
	this->apcost = other.apcost;
	this->damage = other.damage;
	return (*this);
}

AWeapon::~AWeapon()
{
}

std::string const &AWeapon::getName() const
{
	return (this->name);
}

int AWeapon::getAPCost() const
{
	return (this->apcost);
}

int AWeapon::getDamage() const
{
	return (this->damage);
}
