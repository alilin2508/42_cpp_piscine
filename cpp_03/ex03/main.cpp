#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	FragTrap frag("FR4G-TP");
	ScavTrap scav("SC4V-TP");
	ClapTrap clap("CL4P-TP");
	NinjaTrap ninja("NINJ4-TP");
	NinjaTrap nja(ninja);

	clap.takeDamage(frag.meleeAttack("CL4P-TP"));
	frag.takeDamage(clap.rangedAttack("FR4G-TP"));
	scav.takeDamage(ninja.meleeAttack("SC4V-TP"));
	ninja.takeDamage(scav.rangedAttack("NINJ4-TP"));
	frag.beRepaired(20);
	clap.beRepaired(20);
	scav.beRepaired(20);
	ninja.beRepaired(20);
	clap.takeDamage(ninja.rangedAttack("CL4P-TP"));
	frag.takeDamage(scav.meleeAttack("FR4G-TP"));
	scav.takeDamage(clap.meleeAttack("SC4V-TP"));
	ninja.takeDamage(frag.rangedAttack("NINJ4-TP"));
	clap.takeDamage(frag.vaulthunter_dot_exe("CL4P-TP"));
	scav.takeDamage(frag.vaulthunter_dot_exe("CL4P-TP"));
	clap.beRepaired(50);
	scav.beRepaired(50);
	scav.challengeNewcomer("FR4G-TP");
	scav.takeDamage(frag.vaulthunter_dot_exe("CL4P-TP"));
	scav.beRepaired(50);
	scav.challengeNewcomer("NINJ4-TP");
	ninja.ninjaShoebox(scav);
	ninja.ninjaShoebox(nja);
	ninja.ninjaShoebox(clap);
	ninja.ninjaShoebox(frag);
}
