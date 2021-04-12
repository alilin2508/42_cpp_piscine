#include "Brain.hpp"

Brain::Brain()
{
}

Brain::~Brain()
{
}

std::string	Brain::identify() const
{
	const long adr = (long)this;

	std::stringstream str;
	str << "0x" << std::uppercase << std::hex << adr;
	return (str.str());
}
