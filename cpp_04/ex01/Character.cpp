#include "Character.hpp"

Character::Character(std::string const & name):
		name(name)
{
	this->ap = 40;
	this->weapon = NULL;
}

Character::Character(Character const &other)
{
	this->name = other.name;
	this->ap = other.ap;
	this->weapon = other.weapon;
}

Character &Character::operator=(Character const &other)
{
	this->name = other.name;
	this->ap = other.ap;
	this->weapon = other.weapon;
	return (*this);
}

Character::~Character()
{
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::recoverAP()
{
	this->ap += 10;
	if (this->ap > 40)
		this->ap = 40;
}

void Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
	if (!this->weapon || enemy->getHP() == 0 || this->ap < this->weapon->getAPCost())
		return ;
	this->ap -= this->weapon->getAPCost();
	std::cout << this->name << " attacks " << enemy->getType() << " with a " << this->weapon->getName() << std::endl;
	this->weapon->attack();
	enemy->takeDamage(this->weapon->getDamage());
	return ;
}

int Character::getAp() const
{
	return (this->ap);
}

AWeapon *Character::getWeapon() const
{
	return (this->weapon);
}

std::ostream &operator<<(std::ostream &out, Character const &character)
{
	out << character.getName() << " has " << character.getAp() << " AP and ";
	if (character.getWeapon())
		out << "wields a " << character.getWeapon()->getName();
	else
		out << "is unarmed";
	out << std::endl;
	return (out);
}
