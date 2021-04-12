#include "Intern.hpp"

Intern::Create::Create(std::string const &name, Form *(*form)(std::string const &)):
		name(name), form(form)
{
}

Intern::Create::Create(Intern::Create const &other):
		name(other.name), form(other.form)
{
}

Intern::Create &Intern::Create::operator=(Intern::Create const &other)
{
	(void)other;
	return(*this);
}

Intern::Create::~Create()
{
}

bool Intern::Create::isForm(std::string const &name)
{
	return (this->name == name);
}

Form *Intern::Create::create(std::string const &target)
{
	return ((this->form)(target));
}

Intern::Intern()
{
	this->formList[0] = new Intern::Create("presidential pardon", PresidentialPardonForm::generate);
	this->formList[1] = new Intern::Create("robotomy request", RobotomyRequestForm::generate);
	this->formList[2] = new Intern::Create("shrubbery creation", ShrubberyCreationForm::generate);
}

Intern::Intern(Intern const &other)
{
	(void)other;
}

Intern &Intern::operator=(Intern const &other)
{
	(void)other;
	return (*this);
}

Intern::~Intern()
{
	for (int i = 0; i < 3; i++)
		delete (formList[i]);
}

const char *Intern::FormDoesNotExistException::what() const throw()
{
	return ("Intern::FormDoesNotExistException");
}

Form *Intern::makeForm(std::string const &name, std::string const &target)
{
	Form *created = NULL;

	for (int i = 0; created == NULL && i < 3; i++)
	{
		if (this->formList[i]->isForm(name))
			created = this->formList[i]->create(target);
	}
	if (created == NULL)
	{
		std::cout << name << " does not exist" << std::endl;
		throw (Intern::FormDoesNotExistException());
	}
	else
		std::cout << "Intern creates " << name << std::endl;
	return (created);
}
