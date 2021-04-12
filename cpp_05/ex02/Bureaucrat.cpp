#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade):
		name(name), grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &other):
		name(other.name), grade(other.grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	this->grade = other.grade;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat::GradeTooHighException");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat::GradeTooLowException");
}

std::string const Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::incGrade()
{
	this->grade--;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decGrade()
{
	this->grade++;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form &form)
{
	if (form.isSigned())
	{
		std::cout << this->name << " cant sign " << form.getName() << " because the form is already signed." << std::endl;
	}
	 else if (this->grade > form.getSignGrade())
	{
		std::cout << this->name << " cant sign " << form.getName() << " because his grade is too low" << std::endl;
	}
	else
	{
		std::cout << this->name << " signs " << form.getName() << std::endl;
	}
	form.beSigned(*this);
}

void Bureaucrat::executeForm(Form &form)
{
	if (form.isSigned() == false)
	{
		std::cout << this->name << " cant execute the actions from " << form.getName() << " because the form is unsigned." << std::endl;
	}
	 else if (this->grade > form.getExecuteGrade())
	{
		std::cout << this->name << " cant execute the actions from " << form.getName() << " because his grade is too low" << std::endl;
	}
	else
	{
		std::cout << this->name << " executes " << form.getName() << std::endl;
	}
	form.execute(*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade "
	<< bureaucrat.getGrade() << "." << std::endl;
	return (out);
}
