#ifndef AWEAPON_HPP
# define AWEAPON_HPP
#include <string>
#include <iostream>

class AWeapon
{
public:

	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const &other);
	AWeapon &operator=(AWeapon const &other);
	virtual ~AWeapon();

	std::string const &getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;

protected:

	AWeapon();
	std::string name;
	int apcost;
	int damage;
};

#endif
