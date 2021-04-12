#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:

	FragTrap(std::string const &name);
	FragTrap(FragTrap const &other);
	FragTrap &operator=(FragTrap const &other);
	~FragTrap();

	int rangedAttack(std::string const &target);
	int meleeAttack(std::string const &target);
	int vaulthunter_dot_exe(std::string const &target);

protected:

	static	std::string randomAttacks[5];
};

#endif
