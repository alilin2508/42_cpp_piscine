#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
public:
	Character(std::string const &name);
	Character(Character const &other);
	Character &operator=(Character const &other);
	~Character();

	void recoverAP();
	void equip(AWeapon *weapon);
	void attack(Enemy *enemy);
	std::string const &getName() const;

	int getAp() const;
	AWeapon *getWeapon() const;

private:

	Character();
	std::string name;
	int ap;
	AWeapon *weapon;
};

std::ostream &operator<<(std::ostream &out, Character const &character);

#endif
