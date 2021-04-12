#ifndef FORM_HPP
# define FORM_HPP
#include <string>
#include <iostream>
class Form;
#include "Bureaucrat.hpp"

class Form
{
public:

	Form(std::string const &name, int signGrade, int executeGrade);
	Form(Form const &other);
	Form &operator=(Form const &other);
	virtual ~Form();

	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class FormAlreadySignedException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class FormUnsignedException : public std::exception
	{
		virtual const char *what() const throw();
	};

	std::string const getName() const;
	int getSignGrade() const;
	int getExecuteGrade() const;
	bool isSigned() const;
	void beSigned(Bureaucrat const &bureaucrat);
	virtual void execute(Bureaucrat const &bureaucrat);

protected:

	Form();
	std::string const name;
	bool sign;
	int signGrade;
	int executeGrade;
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif
