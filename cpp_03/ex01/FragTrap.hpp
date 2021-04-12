#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <ctime>

class FragTrap
{
public:

	FragTrap(std::string const &name);
	FragTrap(FragTrap const &other);
	FragTrap &operator=(FragTrap const &other);
	~FragTrap();

	int rangedAttack(std::string const &target);
	int meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	int vaulthunter_dot_exe(std::string const &target);

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
	static	std::string randomAttacks[5];
};

#endif
