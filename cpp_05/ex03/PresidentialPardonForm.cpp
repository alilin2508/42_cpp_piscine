#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target):
		Form("presidential pardon", 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other):
		Form(other), target(other.target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	(void)other;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const &bureaucrat)
{
	Form::execute(bureaucrat);
	std::cout << this->target << " has been forgiven by Zafod Beeblebrox" << std::endl;
}

Form *PresidentialPardonForm::generate(std::string const &target)
{
	Form *gen = new PresidentialPardonForm(target);
	return (gen);
}
