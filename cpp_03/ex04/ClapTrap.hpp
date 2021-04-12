#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <ctime>

class ClapTrap
{
public:

	ClapTrap(std::string const &name);
	ClapTrap(ClapTrap const &other);
	ClapTrap &operator=(ClapTrap const &other);
	~ClapTrap();

	int rangedAttack(std::string const &target);
	int meleeAttack(std::string const &target);
	int takeDamage(unsigned int amount);
	int beRepaired(unsigned int amount);

	void copy(ClapTrap const &other);
	std::string const &get_name();

protected:

	int hitPoints;
	int maxHitPoints;
	int energyPoints;
	int maxEnergyPoints;
	int level;
	std::string name;
	int meleeAttackDamage;
	int rangedAttackDamage;
	int armorDamageReduction;
};

#endif
