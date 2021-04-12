#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:

	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &other);
	ScavTrap &operator=(ScavTrap const &other);
	~ScavTrap();

	int rangedAttack(std::string const &target);
	int meleeAttack(std::string const &target);
	void challengeNewcomer(std::string const &target);

private:

	static	std::string randomChallenges[5];
};

#endif
