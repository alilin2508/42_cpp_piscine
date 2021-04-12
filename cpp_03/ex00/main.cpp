#include "FragTrap.hpp"

int main()
{
	FragTrap frag("FR4G-TP");
	FragTrap clap("CL4P-TP");;

	clap.takeDamage(frag.meleeAttack("CL4P-TP"));
	frag.takeDamage(clap.rangedAttack("FR4G-TP"));
	frag.beRepaired(10);
	clap.beRepaired(20);
	clap.takeDamage(frag.vaulthunter_dot_exe("CL4P-TP"));
	frag.takeDamage(clap.meleeAttack("FR4G-TP"));
	clap.takeDamage(frag.vaulthunter_dot_exe("CL4P-TP"));
	clap.beRepaired(50);
	frag.takeDamage(clap.vaulthunter_dot_exe("FR4G-TP"));
	frag.takeDamage(clap.vaulthunter_dot_exe("FR4G-TP"));
	frag.beRepaired(100);
	clap.takeDamage(frag.vaulthunter_dot_exe("CL4P-TP"));
	clap.beRepaired(50);
	clap.takeDamage(frag.vaulthunter_dot_exe("CL4P-TP"));
	clap.takeDamage(frag.vaulthunter_dot_exe("CL4P-TP"));
}
