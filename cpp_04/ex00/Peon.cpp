#include "Peon.hpp"

Peon::Peon(std::string const &name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &other) : Victim(other.name)
{
	this->name = other.name;
	std::cout << "Zog zog." << std::endl;
}

Peon &Peon::operator=(Peon const &other)
{
	this->name = other.name;
	return (*this);
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Peon const &victim)
{
	out << "I am " << victim.get_name() << " and I like otters!" << std::endl;
	return (out);
}
