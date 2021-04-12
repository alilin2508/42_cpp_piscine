#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:

	SuperTrap(std::string const &name);
	SuperTrap(SuperTrap const &other);
	SuperTrap &operator=(SuperTrap const &other);
	~SuperTrap();

	int rangedAttack(std::string const &target);
	int meleeAttack(std::string const &target);

private:

};

#endif
