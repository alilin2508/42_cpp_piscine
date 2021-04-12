#include "Identify.hpp"

Base *generate(void)
{
	srand(time(NULL));
	Base *gen;

	int idx = rand() % 3;
	if (idx == 0)
		gen = new A();
	else if (idx == 1)
		gen = new B();
	else
		gen = new C();
	return (gen);
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p)
{
	identify_from_pointer(&p);
}
