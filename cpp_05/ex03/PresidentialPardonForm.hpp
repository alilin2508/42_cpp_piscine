#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
#include <string>
#include <iostream>
#include <stdlib.h>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:

	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const &other);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &other);
	~PresidentialPardonForm();

	void execute(Bureaucrat const &bureaucrat);

private:

	PresidentialPardonForm();
	std::string const target;
};

#endif
