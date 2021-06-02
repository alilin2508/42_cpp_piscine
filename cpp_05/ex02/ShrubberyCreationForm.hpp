#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
#include <string>
#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:

	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &other);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);
	virtual ~ShrubberyCreationForm();

	class FileOpenException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class ErrorWhileWritingException : public std::exception
	{
		virtual const char *what() const throw();
	};

	void execute(Bureaucrat const &bureaucrat);

private:

	ShrubberyCreationForm();
	std::string const target;
	static std::string const tree[2];

};

#endif
