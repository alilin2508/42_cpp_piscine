#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap frag("FR4G-TP");
	ScavTrap clap("CL4P-TP");

	clap.takeDamage(frag.meleeAttack("CL4P-TP"));
	frag.takeDamage(clap.rangedAttack("FR4G-TP"));
	frag.beRepaired(10);
	clap.beRepaired(20);
	clap.takeDamage(frag.vaulthunter_dot_exe("CL4P-TP"));
	frag.takeDamage(clap.meleeAttack("FR4G-TP"));
	clap.takeDamage(frag.vaulthunter_dot_exe("CL4P-TP"));
	clap.beRepaired(50);
	clap.challengeNewcomer("FR4G-TP");
	clap.takeDamage(frag.vaulthunter_dot_exe("CL4P-TP"));
	clap.beRepaired(50);
	clap.challengeNewcomer("FR4G-TP");
	clap.takeDamage(frag.vaulthunter_dot_exe("CL4P-TP"));
	clap.challengeNewcomer("FR4G-TP");
}
