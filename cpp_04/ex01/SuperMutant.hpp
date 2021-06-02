#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:

	SuperMutant();
	SuperMutant(SuperMutant const &other);
	SuperMutant &operator=(SuperMutant const &other);
	virtual ~SuperMutant();

	void takeDamage(int damage);

private:

};

#endif
