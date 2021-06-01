#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Victim.hpp"
#include "Villager.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	
	return 0;

	// Sorcerer robert("Robert", "the Magnificent");
	// Victim jim("Jimmy");
	// Peon joe("Joe");
	// Villager jack("Jack");
	//
	// std::cout << robert << jim << joe << jack;
	// robert.polymorph(jim);
	// robert.polymorph(joe);
	// robert.polymorph(jack);
	//
	// return 0;
}
