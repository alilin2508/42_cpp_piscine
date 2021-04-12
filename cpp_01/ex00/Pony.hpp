#ifndef PONY_HPP
# define PONY_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>

class Pony
{
public:

	Pony(std::string const &name, std::string const &race, std::string const &color);
	~Pony();

	void eat();
	void jump();
	void sleep();

private:

	std::string name;
	std::string race;
	std::string color;
};

#endif
