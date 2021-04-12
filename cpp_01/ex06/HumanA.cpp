#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, Weapon const &weapon):
		name(name), weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}
