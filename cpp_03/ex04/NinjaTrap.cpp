#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << this->name << ": Resequencing combat protocols!" << std::endl;
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap(NinjaTrap const &other) : ClapTrap(other)
{
	ClapTrap::copy(other);
	std::cout << this->name << ": Resequencing combat protocols!" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &other)
{
	ClapTrap::copy(other);
	return (*this);
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "I AM ON FIRE!!! OH GOD, PUT ME OUT!!!" << std::endl;
}

int NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << ": Sniped!" << std::endl;
	int damage = ClapTrap::rangedAttack(target);
	return (damage);
}

int NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << ": In yo' FACE!" << std::endl;
	int damage = ClapTrap::meleeAttack(target);
	return (damage);
}

void NinjaTrap::ninjaShoebox(FragTrap &other)
{
	int damage = 0;

	system("sleep 1");
	srand((unsigned) time(0));
	std::cout << this->name << ": " << other.get_name() << "! You wanna fight with me?!" << std::endl;
	if ((rand() % 100) > 50)
	{
		damage = rand() % 20;
		std::cout << this->name << " won the duel against " << other.get_name() << " causing " << damage
		<< " of damage!" << std::endl;
		other.takeDamage(damage);
	}
	else
	{
		damage = rand() % 20;
		std::cout << this->name << " lost the duel against " << other.get_name() << std::endl;
		NinjaTrap::takeDamage(damage);
		std::cout << other.get_name() << ": Who's a badass robot? This guy!" << std::endl;
		std::cout << this->name << ": No fair! I wasn't ready." << std::endl;
	}
}

void NinjaTrap::ninjaShoebox(ScavTrap &other)
{
	int damage = 0;

	system("sleep 1");
	srand((unsigned) time(0));
	std::cout << this->name << ": " << other.get_name() << "! A million baddies, and you wanna hit me? Aww!" << std::endl;
	if ((rand() % 100) > 50)
	{
		damage = rand() % 20;
		std::cout << this->name << " won the duel against " << other.get_name() << " causing " << damage
		<< " of damage!" << std::endl;
		other.takeDamage(damage);
	}
	else
	{
		damage = rand() % 20;
		std::cout << this->name << " lost the duel against " << other.get_name() << std::endl;
		NinjaTrap::takeDamage(damage);
		std::cout << other.get_name() << ": Ha ha, this is in no way surprising! Ha ha!" << std::endl;
		std::cout << this->name << ": Crap happens." << std::endl;
	}
}

void NinjaTrap::ninjaShoebox(ClapTrap &other)
{
	int damage = 0;

	system("sleep 1");
	srand((unsigned) time(0));
	std::cout << this->name << ": " << other.get_name() << "! I can take ya!.. I think." << std::endl;
	if ((rand() % 100) > 50)
	{
		damage = rand() % 20;
		std::cout << this->name << " won the duel against " << other.get_name() << " causing " << damage
		<< " of damage!" << std::endl;
		other.takeDamage(damage);
	}
	else
	{
		damage = rand() % 20;
		std::cout << this->name << " lost the duel against " << other.get_name() << std::endl;
		NinjaTrap::takeDamage(damage);
		std::cout << other.get_name() << ": I am so impressed with myself!" << std::endl;
		std::cout << this->name << ": Crap happens." << std::endl;
	}
}

void NinjaTrap::ninjaShoebox(NinjaTrap &other)
{
	std::cout << this->name << ": " << other.get_name() << "! Another NinjaTrap! Gimme five!" << std::endl;
}
