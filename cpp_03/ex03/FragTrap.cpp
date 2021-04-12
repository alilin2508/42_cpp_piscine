#include "FragTrap.hpp"

std::string FragTrap::randomAttacks[5] = {
		"Bad guy go boom!",
		"One for you, one for you, one for you!",
		"Hyperiooooon Punch!",
		"Lightening! Kukachow!",
		"Burn, baby, burn!"
};

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << "Booting sequence complete. Hello! I am your new steward bot. Designation: "
	<< this->name << ", Hyperion Robot, Class C." << std::endl;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other)
{
	ClapTrap::copy(other);
	std::cout << "Booting sequence complete. Hello! I am your new steward bot. Designation: "
	<< this->name << ", Hyperion Robot, Class C." << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
{
	ClapTrap::copy(other);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

int FragTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << ": Heyyah!" << std::endl;
	int damage = ClapTrap::rangedAttack(target);
	return (damage);
}

int FragTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << ": Take that!" << std::endl;
	int damage = ClapTrap::meleeAttack(target);
	return (damage);
}

void FragTrap::takeDamage(unsigned int amount)
{
	int damage = ClapTrap::takeDamage(amount);
	if (damage > 0)
		std::cout << this->name << ": Extra ouch!" << std::endl;
	else
		std::cout << this->name << ": I bet your mom could do better!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << this->name << ": Sweet life juice!" << std::endl;
	ClapTrap::beRepaired(amount);
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
