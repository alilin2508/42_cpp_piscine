#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &other): Enemy(other)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &other)
{
	this->hp = other.hp;
	this->type = other.type;
	return (*this);
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}
