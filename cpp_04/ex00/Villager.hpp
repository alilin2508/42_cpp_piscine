#ifndef VILLAGER_HPP
# define VILLAGER_HPP
#include "Victim.hpp"

class Villager : public Victim
{
public:

	Villager(std::string const &name);
	Villager(Villager const &other);
	Villager &operator=(Villager const &other);
	~Villager();

	void getPolymorphed() const;

private:

	Villager();
};

std::ostream &operator<<(std::ostream &out, Villager const &victim);

#endif
