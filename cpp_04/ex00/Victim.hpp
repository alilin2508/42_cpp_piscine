#ifndef VICTIM_HPP
# define VICTIM_HPP
#include <string>
#include <iostream>

class Victim
{
public:

	Victim(std::string const &name);
	Victim(Victim const &other);
	Victim &operator=(Victim const &other);
	std::string const &get_name() const;
	virtual ~Victim();

	virtual void getPolymorphed() const;

protected:

	Victim();
	std::string name;
};

std::ostream &operator<<(std::ostream &out, Victim const &victim);

#endif
