#ifndef HUMAN_HPP
# define HUMAN_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include "Brain.hpp"

class Human
{
public:

	Human();
	~Human();

	const Brain	&getBrain();
	std::string	identify() const;

private:

	const Brain	brain;
};

#endif
