#ifndef PEON_HPP
# define PEON_HPP
#include "Victim.hpp"

class Peon : public Victim
{
public:

	Peon(std::string const &name);
	Peon(Peon const &other);
	Peon &operator=(Peon const &other);
	~Peon();

	void getPolymorphed() const;

private:

	Peon();

};

std::ostream &operator<<(std::ostream &out, Peon const &victim);

#endif
