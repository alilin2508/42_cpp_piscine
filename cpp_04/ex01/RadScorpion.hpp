#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:

	RadScorpion();
	RadScorpion(RadScorpion const &other);
	RadScorpion &operator=(RadScorpion const &other);
	~RadScorpion();

	using Enemy::takeDamage;

private:

};

#endif
