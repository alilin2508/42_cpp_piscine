#include "HumanB.hpp"

HumanB::HumanB(std::string const &name):
		name(name), weapon()
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon const &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack()
{
	if (weapon)
		std::cout << name << " attacks with his " << weapon->getType() << std::endl;
	else
		std::cout << "You didn't give him weapon :(" << std::endl;
}
