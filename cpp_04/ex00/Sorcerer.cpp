#include "Sorcerer.hpp"
#include "Peon.hpp"

Sorcerer::Sorcerer(std::string const &name, std::string const &title):
		name(name), title(title)
{
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &other)
{
	this->name = other.name;
	this->title = other.title;
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &other)
{
	this->name = other.name;
	this->title = other.title;
	return (*this);
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!"
	<< std::endl;
}

std::string const &Sorcerer::get_name() const
{
	return (this->name);
}

std::string const &Sorcerer::get_title() const
{
	return (this->title);
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer)
{
	out << "I am " << sorcerer.get_name() << ", " << sorcerer.get_title()
	<< ", and I like ponies!" << std::endl;
	return (out);
}
