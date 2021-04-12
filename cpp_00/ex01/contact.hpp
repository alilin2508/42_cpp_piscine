#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>

class Contact
{
public:

	Contact();
	void add();
	void search(int index);
	void display();
	~Contact();

private:

	static	std::string ContactInfo[11];
	std::string					info[11];
};

#endif
