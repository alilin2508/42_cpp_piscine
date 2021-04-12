#include "Array.hpp"

int main()
{
	int t[] = {1, 5, 9, 8, 7};
	std::string arr[] = {"Gab", "est", "trop", "trop", "trop...", "mechant!!"};

	Array<int> tb;
	try
	{
		std::cout << tb.size() << std::endl;
		std::cout << tb[0] << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	Array<int> tab(5);
	try
	{
		for (int i = 0; i < tab.size(); i++)
			tab[i] = t[i];
		for (int i = 0; i < tab.size(); i++)
			std::cout << tab[i] << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	Array<int> tableau(tab);
	try
	{
		for (int i = 0; i < tableau.size(); i++)
			std::cout << tableau[i] << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	tb = tab;
	try
	{
		for (int i = 0; i < tb.size(); i++)
			std::cout << tb[i] << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	Array<std::string> array(6);
	try
	{
		for (int i = 0; i < array.size(); i++)
			array[i] = arr[i];
		for (int i = 0; i < array.size(); i++)
			std::cout << array[i] << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
