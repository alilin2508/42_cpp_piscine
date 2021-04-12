#include "Pony.hpp"

Pony::Pony(std::string const &name, std::string const &race, std::string const &color):
		name(name), race(race), color(color)
{
	std::cout << "You adopted " << name << " which is a " << color << " " << race << std::endl;
}


Pony::~Pony()
{
	std::cout << "You just sent " << name << " to the slaughterhouse !!" << std::endl;
}

void Pony::eat()
{
	std::cout << name << " is eating oatmeal and carrots." << std::endl;
}

void Pony::jump()
{
	std::cout << name << " tried to jump over the fence." << std::endl;
}

void Pony::sleep()
{
	std::cout << name << " is sleeping." << std::endl;
}
