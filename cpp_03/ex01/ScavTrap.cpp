#include "ScavTrap.hpp"

std::string ScavTrap::randomChallenges[5] = {
		"You versus me! Me versus you! Either way!",
		"I will prove to you my robotic superiority!",
		"Dance battle! Or, you know... regular battle.",
		"Man versus machine! Very tiny streamlined machine!",
		"Care to have a friendly duel?"
};

ScavTrap::ScavTrap(std::string const &name):
		hitPoints(100), maxHitPoints(100), energyPoints(50), maxEnergyPoints(50), \
		level(1), name(name), meleeAttackDamage(20), rangedAttackDamage(15), \
		armorDamageReduction(3)
{
	std::cout << this->name << ": Recompiling my combat code!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other)
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
	std::cout << this->name << ": Recompiling my combat code!" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
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
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "I'll die the way I lived: annoying!" << std::endl;
}

int ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << ": Bop!" << std::endl;
	std::cout << this->name << " attacked " << target << " at range, causing "
	<< this->rangedAttackDamage << " of damage!" << std::endl;
	return (this->rangedAttackDamage);
}

int ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << ": Meet professor punch!" << std::endl;
	std::cout << this->name << " attacked " << target << " at melee, causing "
	<< this->meleeAttackDamage << " of damage!" << std::endl;
	return (this->meleeAttackDamage);
}

void ScavTrap::takeDamage(unsigned int amount)
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
		std::cout << this->name << ": My robotic flesh! AAHH!" << std::endl;
		std::cout << this->name << " took " << damage << " of damage!" << std::endl;
	}
	else
		std::cout << this->name << ": You can't kill me!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
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
	std::cout << this->name << ": I found health!" << std::endl;
	std::cout << this->name  << " gained back "  << heal << " hit points!" << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const &target)
{
	system("sleep 1");
	srand((unsigned) time(0));
	if (this->energyPoints >= 25)
	{
		this->energyPoints -= 25;
		std::cout << this->name << ": " << target << "! " << ScavTrap::randomChallenges[rand() % 5] << std::endl;
	}
	else
	{
		std::cout << this->name << " is out of energy!" << std::endl;
		std::cout << this->name << ": Until we meet again on the battlefield, friendo!" << std::endl;
	}
}
