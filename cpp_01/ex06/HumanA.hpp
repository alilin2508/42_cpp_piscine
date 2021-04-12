#ifndef HUMANA_HPP
# define HUMANA_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include "Weapon.hpp"

class HumanA
{
public:

	HumanA(std::string const &name, Weapon const &weapon);
	~HumanA();

	void attack();

private:

	std::string	name;
	Weapon			const &weapon;
};

#endif
