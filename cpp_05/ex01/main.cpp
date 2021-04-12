#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat jimmy("jimmy", 3);
		Form contract("contract", 2, 1);
		std::cout << jimmy << contract;
		jimmy.signForm(contract);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat justin("justin", 3);
		Form ip("important paper", 2, 1);
		std::cout << justin << ip;
		justin.incGrade();
		std::cout << justin;
		justin.signForm(ip);
		std::cout << ip;
		justin.signForm(ip);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form contract("contract", 0, 0);
		std::cout << contract;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form contract("contract", 151, 151);
		std::cout << contract;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form contract("contract", 1, 151);
		std::cout << contract;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form contract("contract", 151, 1);
		std::cout << contract;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
