#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main()
{
	ZombieEvent Dummy;
	ZombieEvent SuperIntelligent;
	ZombieEvent Karen;
	Zombie 			*DummyZombie;
	Zombie 			*SuperIntelligentZombie;
	Zombie 			*KarenZombie;

	Zombie Kind;
	Kind.setCharacteristics("Kind", "Alice");
	Kind.announce();
	Zombie Evil("Evil", "Gabriel");
	Evil.announce();
	Dummy.setZombieType("Dummy");
	DummyZombie = Dummy.randomChump();
	SuperIntelligent.setZombieType("SuperIntelligent");
	SuperIntelligentZombie = SuperIntelligent.randomChump();
	Karen.setZombieType("Karen");
	KarenZombie = Karen.newZombie("Karen");
	KarenZombie->announce();
	std::cout << "The brainsssss I bought were not fresh, I want to talk to your manager !" << std::endl;
	delete(DummyZombie);
	delete(SuperIntelligentZombie);
	delete(KarenZombie);
	return (0);
}
