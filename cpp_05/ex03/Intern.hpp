#ifndef INTERN_HPP
# define INTERN_HPP
#include <string>
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{

private:

	class Create
	{
	public:

		Create(std::string const &name, Form *(*form)(std::string const &));
		Create(Create const &other);
		Create &operator=(Create const &other);
		~Create();

		bool isForm(std::string const &name);
		Form *create(std::string const &target);

	private:

		Create();
		std::string const name;
		Form *(*form)(std::string const &);
	};

public:

	Intern();
	Intern(Intern const &other);
	Intern &operator=(Intern const &other);
	~Intern();

	class FormDoesNotExistException : public std::exception
	{
		virtual const char *what() const throw();
	};

	Form *makeForm(std::string const &name, std::string const &target);
	Create *formList[3];

};

#endif
