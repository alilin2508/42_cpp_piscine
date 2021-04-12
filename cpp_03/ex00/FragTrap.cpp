#include "FragTrap.hpp"

std::string FragTrap::randomAttacks[5] = {
		"Bad guy go boom!",
		"One for you, one for you, one for you!",
		"Hyperiooooon Punch!",
		"Lightening! Kukachow!",
		"Burn, baby, burn!"
};

FragTrap::FragTrap(std::string const &name):
		hitPoints(100), maxHitPoints(100), energyPoints(100), maxEnergyPoints(100), \
		level(1), name(name), meleeAttackDamage(30), rangedAttackDamage(20), \
		armorDamageReduction(5)
{
	std::cout << "Booting sequence complete. Hello! I am your new steward bot. Designation: "
	<< this->name << ", Hyperion Robot, Class C." << std::endl;
}

FragTrap::FragTrap(FragTrap const &otherF)
{
	this->hitPoints = otherF.hitPoints;
	this->maxHitPoints = otherF.maxHitPoints;
	this->energyPoints = otherF.energyPoints;
	this->maxEnergyPoints = otherF.maxEnergyPoints;
	this->level = otherF.level;
	this->name = otherF.name;
	this->meleeAttackDamage = otherF.meleeAttackDamage;
	this->rangedAttackDamage = otherF.rangedAttackDamage;
	this->armorDamageReduction = otherF.armorDamageReduction;
	std::cout << "Booting sequence complete. Hello! I am your new steward bot. Designation: "
	<< this->name << ", Hyperion Robot, Class C." << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &otherF)
{
	this->hitPoints = otherF.hitPoints;
	this->maxHitPoints = otherF.maxHitPoints;
	this->energyPoints = otherF.energyPoints;
	this->maxEnergyPoints = otherF.maxEnergyPoints;
	this->level = otherF.level;
	this->name = otherF.name;
	this->meleeAttackDamage = otherF.meleeAttackDamage;
	this->rangedAttackDamage = otherF.rangedAttackDamage;
	this->armorDamageReduction = otherF.armorDamageReduction;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

int FragTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << ": Heyyah!" << std::endl;
	std::cout << this->name << " attacked " << target << " at range, causing "
	<< this->rangedAttackDamage << " of damage!" << std::endl;
	return (this->rangedAttackDamage);
}

int FragTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << ": Take that!" << std::endl;
	std::cout << this->name << " attacked " << target << " at melee, causing "
	<< this->meleeAttackDamage << " of damage!" << std::endl;
	return (this->meleeAttackDamage);
}

void FragTrap::takeDamage(unsigned int amount)
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
		std::cout << this->name << ": Extra ouch!" << std::endl;
		std::cout << this->name << " took " << damage << " of damage!" << std::endl;
	}
	else
		std::cout << this->name << ": I bet your mom could do better!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
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
}

int FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int damage;

	system("sleep 1");
	srand((unsigned) time(0));
	damage = 0;
	if (this->energyPoints >= 25)
	{
		this->energyPoints -= 25;
		damage = rand() % 30;
		std::cout << this->name << ": " << FragTrap::randomAttacks[rand() % 5]
		<< " I expect you to die!" << std::endl;
		std::cout << this->name << " attacked " << target << " causing " << damage
		<< " of damage!" << std::endl;
	}
	else
	{
		std::cout << this->name << " is out of energy!" << std::endl;
		std::cout << this->name << ": RUN FOR YOUR LIIIIIVES!!!" << std::endl;
	}
	return (damage);
}
