#ifndef AMATERIA_HPP
# define AMATERIA_HPP
#include <string>
#include <iostream>
class AMateria;
#include "ICharacter.hpp"

class AMateria
{
public:

	AMateria(std::string const &type);
	AMateria(AMateria const &other);
	AMateria &operator=(AMateria const &other);
	virtual ~AMateria();

	std::string const &getType() const;
	unsigned int getXP() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter &target);

protected:

	AMateria();
	std::string type;
	unsigned int _xp;
};

#endif
