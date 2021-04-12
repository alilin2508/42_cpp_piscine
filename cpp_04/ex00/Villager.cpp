#include "Villager.hpp"

Villager::Villager(std::string const &name): Victim(name)
{
	std::cout << "Hello!" << std::endl;
}

Villager::Villager(Villager const &other) : Victim(other.name)
{
	this->name = other.name;
	std::cout << "Hello!" << std::endl;
}

Villager &Villager::operator=(Villager const &other)
{
	this->name = other.name;
	return (*this);
}

Villager::~Villager()
{
	std::cout << "Noooooooooooo!!!" << std::endl;
}

void Villager::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a blue cow!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Villager const &victim)
{
	out << "I am " << victim.get_name() << " and I like otters!" << std::endl;
	return (out);
}
