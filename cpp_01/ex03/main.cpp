#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
	ZombieHorde superHungry("superHungry", 10);
	superHungry.announce();
	ZombieHorde kindAndLoving("kindAndLoving", 10);
	kindAndLoving.announce();
	return (0);
}
