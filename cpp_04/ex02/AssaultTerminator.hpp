#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:

	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &other);
	AssaultTerminator &operator=(AssaultTerminator const &other);
	virtual ~AssaultTerminator();

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
