#include "Form.hpp"

Form::Form(std::string const &name, int const signGrade, int const executeGrade):
		name(name), sign(false), signGrade(signGrade), executeGrade(executeGrade)
{
	if (signGrade < 1 || executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || executeGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &other):
		name(other.name), sign(other.sign), signGrade(other.signGrade), executeGrade(other.executeGrade)
{
	if (signGrade < 1 || executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || executeGrade > 150)
		throw Form::GradeTooLowException();
}

Form &Form::operator=(Form const &other)
{
	this->signGrade = other.signGrade;
	this->executeGrade = other.executeGrade;
	if (signGrade < 1 || executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || executeGrade > 150)
		throw Form::GradeTooLowException();
	return (*this);
}

Form::~Form()
{
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Form::GradeTooHighException");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Form::GradeTooLowException");
}

const char *Form::FormAlreadySignedException::what() const throw()
{
	return ("Form::FormAlreadySignedException");
}

const char *Form::FormUnsignedException::what() const throw()
{
	return ("Form::FormUnsignedException");
}

std::string const Form::getName() const
{
	return (this->name);
}

int Form::getSignGrade() const
{
	return (this->signGrade);
}

int Form::getExecuteGrade() const
{
	return (this->executeGrade);
}

bool Form::isSigned() const
{
	return (this->sign);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (Form::isSigned() == true)
		throw Form::FormAlreadySignedException();
	else if (bureaucrat.getGrade() > this->getSignGrade())
		throw Form::GradeTooHighException();
	this->sign = true;
}

void Form::execute(Bureaucrat const &bureaucrat)
{
	if (Form::isSigned() == false)
		throw (Form::FormUnsignedException());
	else if (bureaucrat.getGrade() > this->executeGrade)
		throw (Form::GradeTooHighException());
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
	out << "The " << form.getName() << " form is " << (form.isSigned() ? "signed " : "unsigned ")
	<< "and it's sign grade and execute grade are respectively " << form.getSignGrade() << " and "
	<< form.getExecuteGrade() << "." << std::endl;
	return (out);
}
