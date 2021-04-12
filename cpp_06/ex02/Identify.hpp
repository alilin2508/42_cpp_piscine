#ifndef IDENTIFY_HPP
# define IDENTIFY_HPP
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <stdlib.h>
#include <ctime>

Base *generate(void);
void identify_from_pointer(Base *p);
void identify_from_reference(Base &p);

#endif
