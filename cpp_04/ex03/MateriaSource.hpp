#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:

	MateriaSource();
	MateriaSource(MateriaSource const &other);
	MateriaSource &operator=(MateriaSource const &other);
	~MateriaSource();
	
	void learnMateria(AMateria *m);
	AMateria* createMateria(std::string const &type);

private:

	int idx;
	AMateria *materia[4];
};

#endif
