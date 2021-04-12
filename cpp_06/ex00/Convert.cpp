#include "Convert.hpp"

Convert::Convert(double const &val, int const &precision):
		val(val), precision(precision)
{
}

Convert::Convert(Convert const &other):
		val(other.val), precision(other.precision)
{
}

Convert &Convert::operator=(Convert const &other)
{
	this->val = other.val;
	this->precision = other.precision;
	return (*this);
}

Convert::~Convert()
{
}

const char *Convert::ImpossibleException::what() const throw()
{
	return ("impossible");
}

const char *Convert::NonDisplayableException::what() const throw()
{
	return ("Non displayable");
}

const char *Convert::NaNException::what() const throw()
{
	return ("nan");
}

int Convert::getPrecision(std::string const &value)
{
	int pres = 0;
	size_t i;
	for (i = 0; i < value.length() && isdigit(value[i]); i++)
	if (value.length() == i)
		return (1);
	for (size_t j = i + 1; j < value.length() && isdigit(value[j]); j++)
		pres++;
	if (pres == 1)
		return (1);
	return (pres + 1);
}

void Convert::toInt()
{
	if (isinf(this->val) == true || isnan(this->val) == true || this->val < static_cast<int>(INT_MIN) || this->val > static_cast<int>(INT_MAX))
		throw (Convert::ImpossibleException());
	std::cout << static_cast<int>(this->val) << std::endl;
}

void Convert::toChar()
{
	char c;

	if (isnan(this->val) == true)
	 	throw (Convert::ImpossibleException());
	c = static_cast<char>(this->val);
	if (!std::isprint(c))
		throw (Convert::NonDisplayableException());
	std::cout << "'" << c << "'" << std::endl;
}

void Convert::toFloat()
{
	if (isnan(this->val) == true)
		throw (Convert::NaNException());
	std::cout << std::setprecision(this->precision) << std::fixed << static_cast<float>(this->val);
}

void Convert::printDouble()
{
	if (isnan(this->val) == true)
		throw (Convert::NaNException());
	std::cout << std::setprecision(this->precision) << std::fixed << static_cast<double>(this->val) << std::endl;
}

void Convert::convert()
{
	try
	{
		std::cout << "char: ";
		Convert::toChar();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "int: ";
		Convert::toInt();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "float: ";
		Convert::toFloat();
		std::cout << "f" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << "f" << std::endl;
	}
	try
	{
		std::cout << "double: ";
		Convert::printDouble();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
