#include "ScavTrap.hpp"

std::string ScavTrap::randomChallenges[5] = {
		"You versus me! Me versus you! Either way!",
		"I will prove to you my robotic superiority!",
		"Dance battle! Or, you know... regular battle.",
		"Man versus machine! Very tiny streamlined machine!",
		"Care to have a friendly duel?"
};

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << this->name << ": Recompiling my combat code!" << std::endl;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other)
{
	ClapTrap::copy(other);
	std::cout << this->name << ": Recompiling my combat code!" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
	ClapTrap::copy(other);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "I'll die the way I lived: annoying!" << std::endl;
}

int ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << ": Bop!" << std::endl;
	int damage = ClapTrap::rangedAttack(target);
	return (damage);
}

int ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << ": Meet professor punch!" << std::endl;
	int damage = ClapTrap::meleeAttack(target);
	return (damage);
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
