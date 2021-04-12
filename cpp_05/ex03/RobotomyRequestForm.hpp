#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
#include <string>
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:

	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &other);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &other);
	~RobotomyRequestForm();

	void execute(Bureaucrat const &bureaucrat);

private:

	RobotomyRequestForm();
	std::string const target;
};

#endif
