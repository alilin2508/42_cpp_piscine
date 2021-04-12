#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bob("bob", 2);
		std::cout << bob;
		bob.incGrade();
		std::cout << bob;
		bob.decGrade();
		std::cout << bob;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat jim("jim", 0);
		std::cout << jim;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat joe("joe", 151);
		std::cout << joe;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat jack("jack", 150);
		std::cout << jack;
		jack.decGrade();
		std::cout << jack;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat john("john", 1);
		std::cout << john;
		john.incGrade();
		std::cout << john;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
