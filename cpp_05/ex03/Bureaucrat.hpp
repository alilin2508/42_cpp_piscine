#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <string>
#include <iostream>
class Bureaucrat;
#include "Form.hpp"

class Bureaucrat
{
public:

	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &other);
	Bureaucrat &operator=(Bureaucrat const &other);
	~Bureaucrat();

	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};

	std::string const getName() const;
	int getGrade() const;
	void incGrade();
	void decGrade();
	void signForm(Form &form);
	void executeForm(Form &form);

private:

	Bureaucrat();
	std::string const name;
	int grade;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif
