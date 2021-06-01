#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;

	// ISpaceMarine* bob = new TacticalMarine;
	// ISpaceMarine* jim = new AssaultTerminator;
	// ISpaceMarine* john = new TacticalMarine;
	// ISpaceMarine* jack = new AssaultTerminator;
	// ISquad* vlc = new Squad;
	// ISpaceMarine* joe = new TacticalMarine;
	// ISpaceMarine* jonny = new TacticalMarine;
	// ISpaceMarine* justin = new TacticalMarine;
	// ISquad* squad = new Squad;
	//
	// vlc->push(bob);
	// vlc->push(jim);
	// for (int i = 0; i < vlc->getCount(); ++i)
	// {
	// 	ISpaceMarine* cur = vlc->getUnit(i);
	// 	cur->battleCry();
	// 	cur->rangedAttack();
	// 	cur->meleeAttack();
	// }
	// vlc->push(jack);
	// vlc->push(john);
	// for (int i = 0; i < vlc->getCount(); ++i)
	// {
	// 	ISpaceMarine* cur = vlc->getUnit(i);
	// 	cur->battleCry();
	// 	cur->rangedAttack();
	// 	cur->meleeAttack();
	// }
	// delete vlc;
	// squad->push(joe);
	// squad->push(jonny);
	// squad->push(justin);
	// for (int i = 0; i < squad->getCount(); ++i)
	// {
	// 	ISpaceMarine* cur = squad->getUnit(i);
	// 	cur->battleCry();
	// 	cur->rangedAttack();
	// 	cur->meleeAttack();
	// }
	// delete squad;
	// return 0;
}
