#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	type = std::string();
}

ZombieEvent::~ZombieEvent()
{
}

void ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie;
	zombie = new Zombie(type, name);
	return (zombie);
}

Zombie *ZombieEvent::randomChump()
{
	Zombie *zombie;
	zombie = new Zombie(type, Zombie::randomName());
	zombie->announce();
	return (zombie);
}
