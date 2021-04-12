#include "Character.hpp"

Character::Character(std::string const &name):
		name(name), idx(0)
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
}

Character::Character(Character const &other):
	name(other.name), idx(0)
{
	for (int i = 0; i < other.idx; i++)
		this->equip(other.materia[i]->clone());
	for (int i = idx; i < 4; i++)
		this->materia[i] = NULL;
}

Character &Character::operator=(Character const &other)
{
	this->name = other.name;
	for (int i = 0; i < this->idx; i++)
		delete (this->materia[i]);
	this->idx = 0;
	for (int i = 0; i < other.idx; i++)
		this->equip(other.materia[i]->clone());
	for (int i = idx; i < 4; i++)
		this->materia[i] = NULL;
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < this->idx; i++)
		delete (this->materia[i]);
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
	if (m == NULL || this->idx == 4)
		return ;
	for (int i = 0; i < this->idx; i++)
	{
		if (this->materia[i] == m)
			return ;
	}
	this->materia[this->idx] = m;
	this->idx++;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= this->idx || this->materia[idx] == NULL)
		return ;
	for (int i = idx; i < 3; i++)
	{
		this->materia[i] = this->materia[i + 1];
		this->materia[i + 1] = NULL;
	}
	this->idx--;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= this->idx || this->materia[idx] == NULL)
		return ;
	this->materia[idx]->use(target);
}
