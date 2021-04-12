#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>
#include <iomanip>
#include <string>

class Weapon
{
public:

	Weapon();
	Weapon(std::string const &type);
	~Weapon();

	std::string const &getType() const;
	void 							setType(std::string const &type);

private:

	std::string type;
};

#endif
