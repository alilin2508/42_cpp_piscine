#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &name):
		hitPoints(100), maxHitPoints(100), energyPoints(100),
		maxEnergyPoints(100), level(1), name(name),
		meleeAttackDamage(25), rangedAttackDamage(20),
		armorDamageReduction(10)
{
	std::cout << "ClapTrap " << this->name << " created." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	ClapTrap::copy(other);
	std::cout << "ClapTrap " << this->name << " created." << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	ClapTrap::copy(other);
	return (*this);
}

void ClapTrap::copy(ClapTrap const &other)
{
	this->hitPoints = other.hitPoints;
	this->maxHitPoints = other.maxHitPoints;
	this->energyPoints = other.energyPoints;
	this->maxEnergyPoints = other.maxEnergyPoints;
	this->level = other.level;
	this->name = other.name;
	this->meleeAttackDamage = other.meleeAttackDamage;
	this->rangedAttackDamage = other.rangedAttackDamage;
	this->armorDamageReduction = other.armorDamageReduction;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " is now dead." << std::endl;
}

int ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " attacked " << target << " at range, causing "
	<< this->rangedAttackDamage << " of damage!" << std::endl;
	return (this->rangedAttackDamage);
}

int ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << " attacked " << target << " at melee, causing "
	<< this->meleeAttackDamage << " of damage!" << std::endl;
	return (this->meleeAttackDamage);
}

int ClapTrap::takeDamage(unsigned int amount)
{
	int damage = amount - this->armorDamageReduction;
	if (damage > 0)
	{
		if (damage > this->hitPoints)
		{
			damage = this->hitPoints;
			this->hitPoints = 0;
		}
		else
			this->hitPoints -= damage;
		std::cout << this->name << ": Ow hohoho, that hurts! Yipes!" << std::endl;
		std::cout << this->name << " took " << damage << " of damage!" << std::endl;
	}
	else
		std::cout << this->name << ": I bet your mom could do better!" << std::endl;
	return (damage);
}

int ClapTrap::beRepaired(unsigned int amount)
{
	int heal = this->hitPoints + amount;
	if (heal > this->maxHitPoints)
	{
		heal = this->maxHitPoints - this->hitPoints;
		this->hitPoints = this->maxHitPoints;
	}
	else
	{
		heal = amount;
		this->hitPoints += amount;
	}
	std::cout << this->name << ": Sweet life juice!" << std::endl;
	std::cout << this->name  << " gained back "  << heal << " hit points!" << std::endl;
	return (heal);
}

std::string const &ClapTrap::get_name()
{
	return (this->name);
}
