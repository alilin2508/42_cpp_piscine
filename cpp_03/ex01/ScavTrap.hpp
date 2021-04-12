#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <ctime>

class ScavTrap
{
public:

	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &other);
	ScavTrap &operator=(ScavTrap const &other);
	~ScavTrap();

	int rangedAttack(std::string const &target);
	int meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(std::string const &target);

private:

	int hitPoints;
	int maxHitPoints;
	int energyPoints;
	int maxEnergyPoints;
	int level;
	std::string name;
	int meleeAttackDamage;
	int rangedAttackDamage;
	int armorDamageReduction;
	static	std::string randomChallenges[5];
};

#endif
