#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::Cure(Cure const &other): AMateria("cure")
{
	this->_xp = other._xp;
}

Cure &Cure::operator=(Cure const &other)
{
	this->_xp = other._xp;
	return (*this);
}

Cure::~Cure()
{
}

AMateria *Cure::clone() const
{
	Cure *cpy = new Cure(*this);
	return (cpy);
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
