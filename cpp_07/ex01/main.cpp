#include "iter.hpp"

int main()
{
	int tab[] = {0, 5, 9, 8, 7};
	std::string array[] = {"Gab", "est", "trop", "trop", "trop...", "mechant!!"};

	::iter(tab, 5, myPrint);
	::iter(array, 6, myPrint);
}
