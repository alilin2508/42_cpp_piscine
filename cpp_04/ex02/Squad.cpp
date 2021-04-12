#include "Squad.hpp"

Squad::Squad():
		count(0), units(NULL)
{
}

Squad::Squad(Squad const &other):
		count(0), units(NULL)
{
	this->count = 0;
	for (int i = 0; i < other.getCount(); i++)
		this->push(other.getUnit(i)->clone());
}

Squad &Squad::operator=(Squad const &other)
{
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
			delete this->units[i];
		delete this->units;
		this->units = NULL;
	}
	this->count = 0;
	for (int i = 0; i < other.getCount(); i++)
		this->push(other.getUnit(i)->clone());
	return (*this);
}

Squad::~Squad()
{
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
			delete this->units[i];
		delete this->units;
	}
}

int Squad::getCount() const
{
	return (this->count);
}

ISpaceMarine* Squad::getUnit(int index) const
{
	if (index < 0 || index >= this->count || this->count == 0)
		return (0);
	return (this->units[index]);
}

int Squad::push(ISpaceMarine *unit)
{
	if (!unit)
		return (this->count);
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
		{
			if (this->units[i] == unit)
				return (this->count);
		}
		ISpaceMarine **n = new ISpaceMarine*[this->count + 1];
		for (int i = 0; i < this->count; i++)
			n[i] = units[i];
		delete (units);
		this->units = n;
		this->units[this->count] = unit;
		this->count++;
	}
	else
	{
		this->units = new ISpaceMarine*[1];
		this->units[0] = unit;
		this->count = 1;
	}
	return (this->count);
}
