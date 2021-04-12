#ifndef SORCERER_HPP
# define SORCERER_HPP
#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
public:

	Sorcerer(std::string const &name, std::string const &title);
	Sorcerer(Sorcerer const &other);
	Sorcerer &operator=(Sorcerer const &other);
	std::string const &get_name() const;
	std::string const &get_title() const;
	~Sorcerer();

	void polymorph(Victim const &victim) const;

private:

	Sorcerer();
	std::string name;
	std::string title;
};

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer);

#endif
