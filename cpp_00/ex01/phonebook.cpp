#include "contact.hpp"

int main()
{
	std::string		command;
	std::string		name;
	int						index;
	int						nbcontacts(0);
	Contact				Contact[8];

	while(42)
	{
		std::cout << "This is an amazing phonebook ! You can ADD or SEARCH a contact or EXIT." << std::endl;
		getline(std::cin, command);
		if (command == "EXIT")
			return (0);
		else if(command == "ADD")
		{
			if(nbcontacts < 8)
			{
				Contact[nbcontacts].add();
				nbcontacts++;
				std::cout << "Contact and informations saved." << std::endl;
			}
			else
				std::cout << "! Already too many contacts in the phonebook !" << std::endl;
		}
		else if(command == "SEARCH")
		{
			std::cout << "----------|----------|----------|----------" << std::endl;
			std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME" << std::endl;
			for (int i(0); i < nbcontacts; i++)
				Contact[i].search(i);
			std::cout << "----------|----------|----------|----------" << std::endl;
			if (nbcontacts != 0)
			{
				std::cout << "Choose an index to display the contact's informations." << std::endl;
				while (!(std::cin >> index)|| (index < 0 || index >= nbcontacts))
				{
					std::cin.clear();
					std::cin.ignore(10000, '\n');
					std::cout << "Invalid index, please enter a valid index." << std::endl;
				}
				std::cin.ignore(10000, '\n');
				Contact[index].display();
			}
			else
				std::cout << "Your phonebook is empty, you have no friends, nobody loves you..." << std::endl;
		}
	}
}
