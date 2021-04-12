#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
		Form("robotomy request", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other):
		Form(other), target(other.target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	(void)other;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const &bureaucrat)
{
	Form::execute(bureaucrat);
	std::cout << "* LOUD DRILL NOISES *" << std::endl;
	srand(time(NULL));
	system("sleep 1");
	if ((rand() % 100) > 50)
		std::cout << this->target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->target << "'s robotomization is a failure" << std::endl;
}

Form *RobotomyRequestForm::generate(std::string const &target)
{
	Form *gen = new RobotomyRequestForm(target);
	return (gen);
}
