#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string const &name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	std::cout << this->name << ": I am SuperTrap a tornado of death and bullets!" << std::endl;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
}

SuperTrap::SuperTrap(SuperTrap const &other) : ClapTrap(other.name), FragTrap(name), NinjaTrap(name)
{
	ClapTrap::copy(other);
	std::cout << this->name << ": SuperTrap a tornado of death and bullets!" << std::endl;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &other)
{
	ClapTrap::copy(other);
	return (*this);
}

SuperTrap::~SuperTrap()
{
	std::cout << this->name << ": Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
}

int SuperTrap::rangedAttack(std::string const &target)
{
	return(FragTrap::rangedAttack(target));
}

int SuperTrap::meleeAttack(std::string const &target)
{
	return (NinjaTrap::meleeAttack(target));
}
