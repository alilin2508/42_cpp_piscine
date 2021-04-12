#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
public:

	NinjaTrap(std::string const &name);
	NinjaTrap(NinjaTrap const &other);
	NinjaTrap &operator=(NinjaTrap const &other);
	~NinjaTrap();

	int rangedAttack(std::string const &target);
	int meleeAttack(std::string const &target);
	void ninjaShoebox(FragTrap &trap);
	void ninjaShoebox(ScavTrap &trap);
	void ninjaShoebox(ClapTrap &trap);
	void ninjaShoebox(NinjaTrap &trap);

protected:

};

#endif
