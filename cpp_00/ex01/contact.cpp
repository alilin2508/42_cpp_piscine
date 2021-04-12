#include "contact.hpp"

std::string Contact::ContactInfo[11] = {
			"first name",
			"last name",
			"nickname",
			"login",
			"postal address",
			"email address",
			"phone number",
			"birthday date",
			"favorite meal",
			"under wearcolor",
			"darkest secret"
};

Contact::Contact()
{
	for (int i(0); i < 11; i++)
	{
		info[i] = std::string();
	}
}

void Contact::add()
{
	for (int i(0); i < 11; i++)
	{
		std::cout << "Enter " << ContactInfo[i] << std::endl;
		getline(std::cin, info[i]);
	}
	return;
}

void Contact::search(int index)
{
	int	i;
	std::cout << std::setw(10) << index << "|";
	for (i = 0; i < 2; i++)
	{
			if(info[i].length() > 10)
				std::cout << info[i].substr(0, 9) << ".|";
			else
				std::cout << std::setw(10) << info[i] << "|";
	}
	if(info[i].length() > 10)
		std::cout << info[i].substr(0, 9) << "." << std::endl;
	else
		std::cout << std::setw(10) << info[i] << std::endl;
}

void Contact::display()
{
	for (int i(0); i < 11; i++)
	{
		std::cout << ContactInfo[i] << " = " << info[i] << std::endl;
	}
}

Contact::~Contact()
{
}
