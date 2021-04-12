#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource():
		idx(0)
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &other):
		idx(0)
{
	for (int i = 0; i < other.idx; i++)
		this->learnMateria(other.materia[i]->clone());
	for (int i = this->idx; i < 4; i++)
		this->materia[i] = NULL;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	for (int i = 0; i < this->idx; i++)
		delete (this->materia[i]);
	this->idx = 0;
	for (int i = 0; i < other.idx; i++)
		this->learnMateria(other.materia[i]->clone());
	for (int i = this->idx; i < 4; i++)
		this->materia[i] = NULL;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->idx; i++)
		delete (this->materia[i]);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->idx == 4 || m == NULL)
		return ;
	this->materia[this->idx] = m;
	this->idx++;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->idx; i++)
	{
		if (this->materia[i]->getType() == type)
			return (this->materia[i]->clone());
	}
	return (NULL);
}
