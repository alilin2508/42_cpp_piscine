#include "easyfind.hpp"

int main()
{

	int list[] = {0, 6, 8, 7, 4, 5, 3, 2, 9, 1};
	std::list<int> l;

	for (size_t i = 0; i < 10; i++)
		l.push_back(list[i]);

	try
	{
		int idx = ::easyfind(l, 3);
		std::cout << "list contains " << idx << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << "Exception: Value not found" << std::endl;
	}
	try
	{
		int idx = ::easyfind(l, 1);
		std::cout << "list contains " << idx << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << "Exception: Value not found" << std::endl;
	}
	try
	{
		int idx = ::easyfind(l, 10);
		std::cout << "list contains " << idx << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << "Exception: Value not found" << std::endl;
	}
	l.clear();
	return (0);
}
