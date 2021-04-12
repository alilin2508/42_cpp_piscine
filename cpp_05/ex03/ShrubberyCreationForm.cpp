#include "ShrubberyCreationForm.hpp"

std::string const ShrubberyCreationForm::tree[2] = {
			"    _\\/_\n" \
			"     /\\\n" \
			"     /\\\n" \
			"    /  \\\n" \
			"    /~~\\o\n" \
			"   /o   \\\n" \
			"  /~~*~~~\\\n" \
			" o/    o \\\n" \
			" /~~~~~~~~\\~`\n" \
			"/__*_______\\\n" \
			"     ||\n" \
			"   \\====/\n" \
			"    \\__/\n",
			"         v\n" \
			"        >X<\n" \
			"         A\n" \
			"        d$b\n" \
			"      .d/$$b.\n" \
			"    .d$i$$/$$b.\n" \
			"       d$$@b\n" \
			"      d/$$$ib\n" \
			"    .d$$$/$$$b\n" \
			"  .d$$@$$$$/$$ib.\n" \
			"      d$$i$$b\n" \
			"     d/$$$$@$b\n" \
			"  .d$@$$/$$$$$@b.\n" \
			".d$$$$i$$$/$$$$$$b.\n" \
			"        ###\n" \
			"        ###\n" \
			"        ###\n"
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):
		Form("shrubbery creation", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other):
		Form(other), target(other.target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	(void)other;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

const char *ShrubberyCreationForm::FileOpenException::what() const throw()
{
	return ("ShrubberyCreationForm::FileOpenException");
}

const char *ShrubberyCreationForm::ErrorWhileWritingException::what() const throw()
{
	return ("ShrubberyCreationForm::ErrorWhileWritingException");
}

void ShrubberyCreationForm::execute(Bureaucrat const &bureaucrat)
{
	Form::execute(bureaucrat);
	std::ofstream fileOut;
	fileOut.open((this->target + "_shrubbery").c_str(), std::ios::trunc);

	if (!fileOut.is_open() || fileOut.bad())
		throw (ShrubberyCreationForm::FileOpenException());
	for (int i = 0; i < 2; i++)
	{
		fileOut << tree[i];
		if (fileOut.bad())
		{
			fileOut.close();
			throw (ShrubberyCreationForm::ErrorWhileWritingException());
		}
	}
	fileOut.close();
}

Form *ShrubberyCreationForm::generate(std::string const &target)
{
	Form *gen = new ShrubberyCreationForm(target);
	return (gen);
}
