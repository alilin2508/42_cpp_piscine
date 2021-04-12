#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for action !" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &other)
{
	(void)other;
	std::cout << "Tactical Marine ready for action !" << std::endl;
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine const &other)
{
	(void)other;
	return (*this);
}

TacticalMarine::~TacticalMarine()
{
	std::cout <<  "Aaargh ..." << std::endl;
}

ISpaceMarine* TacticalMarine::clone() const
{
	TacticalMarine *cpy = new TacticalMarine(*this);
	return (cpy);
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the Holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
