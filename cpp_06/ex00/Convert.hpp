#ifndef CONVERT_HPP
# define CONVERT_HPP
#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

class Convert
{
public:

	Convert(double const &val, int const &precision);
	Convert(Convert const &other);
	Convert &operator=(Convert const &other);
	~Convert();

	class ImpossibleException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class NonDisplayableException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class NaNException : public std::exception
	{
		virtual const char *what() const throw();
	};

	static int getPrecision(std::string const &value);
	void convert();
	void toInt();
	void toFloat();
	void toChar();
	void printDouble();

private:

	Convert();
	double val;
	int precision;
};

#endif
