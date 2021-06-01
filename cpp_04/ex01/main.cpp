#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;

	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	return 0;
	
	// Character* me = new Character("me");
	// std::cout << *me;
	//
	// Enemy* a = new SuperMutant();
	// Enemy* b = new RadScorpion();
	// AWeapon* pr = new PlasmaRifle();
	// AWeapon* pf = new PowerFist();
	//
	//
	// me->attack(a);
	// std::cout << *me;
	// me->equip(pf);
	// std::cout << *me;
	// me->attack(a);
	// std::cout << *me;
	// me->attack(a);
	// std::cout << *me;
	// me->attack(a);
	// me->equip(pr);
	// std::cout << *me;
	// me->attack(a);
	// std::cout << *me;
	// me->attack(a);
	// std::cout << *me;
	// me->recoverAP();
	// std::cout << *me;
	// me->attack(b);
	// std::cout << *me;
	// me->attack(b);
	// std::cout << *me;
	// me->attack(b);
	// std::cout << *me;
	// me->recoverAP();
	// std::cout << *me;
	// me->attack(b);
	// std::cout << *me;
	// me->attack(b);
	// std::cout << *me;
	// delete(me);
	// delete(pr);
	// delete(pf);
	// if (a->getHP() != 0)
	// 	delete (a);
	// if (b->getHP() != 0)
	// 	delete (b);
	//
	// return 0;
}
