#include "Identify.hpp"

int main()
{
	Base *gen = generate();

	std::cout << "Base identified by pointer: ";
	identify_from_pointer(gen);
	std::cout << "Base identified by reference: ";
	identify_from_reference(*gen);
	delete(gen);
}
