#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	
	return 0;

	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// src->learnMateria(new Cure());
	// src->learnMateria(new Ice());
	// src->learnMateria(new Ice());
	// ICharacter* moi = new Character("moi");
	// AMateria* tmp;
	//
	// tmp = src->createMateria("ice");
	// moi->equip(tmp);
	// tmp = src->createMateria("cure");
	// moi->equip(tmp);
	// tmp = src->createMateria("ice");
	// moi->equip(tmp);
	// tmp = src->createMateria("ice");
	// moi->equip(tmp);
	// tmp = src->createMateria("cure");
	// moi->equip(tmp);
	//
	// ICharacter* bob = new Character("bob");
	// ICharacter* jack = new Character("jack");
	//
	// moi->use(0, *bob);
	// moi->use(1, *bob);
	// moi->use(2, *bob);
	// moi->use(3, *bob);
	// moi->use(4, *bob);
	//
	// moi->unequip(3);
	// moi->use(3, *bob);
	//
	// moi->equip(tmp);
	// moi->use(3, *jack);
	//
	// delete bob;
	// delete src;
	// delete jack;
	// delete moi;
	// return 0;
}
