#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	ScavTrap scav("SC4V-TP");
	SuperTrap super("SUPER-TP");

	super.takeDamage(scav.rangedAttack("SUPER-TP"));
	scav.takeDamage(super.meleeAttack("SC4V-TP"));
	super.takeDamage(scav.meleeAttack("SUPER-TP"));
	scav.takeDamage(super.rangedAttack("SC4V-TP"));
	super.beRepaired(20);
	scav.beRepaired(20);
	scav.challengeNewcomer("SUPER-TP");
	scav.takeDamage(super.vaulthunter_dot_exe("SC4V-TP"));
	scav.beRepaired(50);
	scav.challengeNewcomer("SUPER-TP");
	super.ninjaShoebox(scav);
}
