#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *rrf;
		Bureaucrat jimmy("Jimmy", 5);
		std::cout << jimmy;
		jimmy.signForm(*rrf);
		std::cout << *rrf;
		jimmy.executeForm(*rrf);
		delete (rrf);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Intern someRandomIntern;
		Form* ppf;
		ppf = someRandomIntern.makeForm("presidential pardon", "Bender");
		std::cout << *ppf;
		Bureaucrat joe("Joe", 5);
		std::cout << joe;
		joe.signForm(*ppf);
		std::cout << *ppf;
		joe.executeForm(*ppf);
		delete (ppf);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Intern someRandomIntern;
		Form* scf;
		scf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		std::cout << *scf;
		Bureaucrat jim("Jim", 5);
		std::cout << jim;
		jim.signForm(*scf);
		std::cout << *scf;
		jim.executeForm(*scf);
		delete (scf);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Intern someRandomIntern;
		Form* f;
		f = someRandomIntern.makeForm("any form", "Bender");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
