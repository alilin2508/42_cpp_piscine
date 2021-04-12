#include "Pony.hpp"

void ponyOnTheStack()
{
	Pony pony("Gabriel", "shetland", "poop brown");

	pony.eat();
	pony.sleep();
	pony.jump();
}

void ponyOnTheHeap()
{
	Pony *pony;
	pony = new Pony("Gab", "falabella", "white");

	pony->eat();
	pony->sleep();
	pony->jump();
	delete pony;
}

int main()
{
	std::cout << "created pony on the stack" << std::endl;
	ponyOnTheStack();
	std::cout << "created pony on the heap" << std::endl;
	ponyOnTheHeap();
	return 0;
}
