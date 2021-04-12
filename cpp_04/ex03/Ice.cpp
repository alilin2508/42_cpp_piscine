#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
}

Ice::Ice(Ice const &other): AMateria("ice")
{
	this->_xp = other._xp;
}

Ice &Ice::operator=(Ice const &other)
{
	this->_xp = other._xp;
	return (*this);
}

Ice::~Ice()
{
}

AMateria *Ice::clone() const
{
	Ice *cpy = new Ice(*this);
	return (cpy);
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
