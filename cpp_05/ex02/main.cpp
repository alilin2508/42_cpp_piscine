#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try
	{
		Form *shrubberyCreationForm = new ShrubberyCreationForm("bob");
		Bureaucrat jim("Jim", 5);
		std::cout << jim << *shrubberyCreationForm;
		jim.signForm(*shrubberyCreationForm);
		std::cout << *shrubberyCreationForm;
		jim.executeForm(*shrubberyCreationForm);
		delete (shrubberyCreationForm);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form *robotomyRequestForm = new RobotomyRequestForm("Jim");
		Bureaucrat jimmy("Jimmy", 5);
		std::cout << jimmy << *robotomyRequestForm;
		jimmy.signForm(*robotomyRequestForm);
		std::cout << *robotomyRequestForm;
		jimmy.executeForm(*robotomyRequestForm);
		delete (robotomyRequestForm);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form *presidentialPardonForm = new PresidentialPardonForm("Jimmy");
		Bureaucrat joe("Joe", 5);
		std::cout << joe << *presidentialPardonForm;
		joe.signForm(*presidentialPardonForm);
		std::cout << *presidentialPardonForm;
		joe.executeForm(*presidentialPardonForm);
		delete (presidentialPardonForm);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form *shrubberyCreation = new ShrubberyCreationForm("bob");
		Bureaucrat jim("Jim", 5);
		std::cout << jim << *shrubberyCreation;
		jim.executeForm(*shrubberyCreation);
		delete (shrubberyCreation);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form *shrubberyForm = new ShrubberyCreationForm("bob");
		Bureaucrat jim("Jim", 140);
		std::cout << jim << *shrubberyForm;
		jim.signForm(*shrubberyForm);
		std::cout << *shrubberyForm;
		jim.executeForm(*shrubberyForm);
		delete (shrubberyForm);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
