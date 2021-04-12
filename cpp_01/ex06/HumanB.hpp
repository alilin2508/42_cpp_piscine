#ifndef HUMANB_HPP
# define HUMANB_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include "Weapon.hpp"

class HumanB
{
public:

	HumanB(std::string const &name);
	~HumanB();

	void setWeapon(Weapon const &weapon);
	void attack();

private:

	std::string	name;
	Weapon			const *weapon;
};

#endif
