#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include "ICharacter.hpp"

class Character : public ICharacter
{
public:

	Character(std::string const &name);
	Character(Character const &other);
	Character &operator=(Character const &other);
	~Character();

	std::string const & getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);

private:

	Character();
	std::string name;
	int idx;
	AMateria *materia[4];
};

#endif
