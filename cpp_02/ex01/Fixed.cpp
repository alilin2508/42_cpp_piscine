#include "Fixed.hpp"

Fixed::Fixed():
		value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = (value << Fixed::nbBits);
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << Fixed::nbBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &otherF)
{
	std::cout << "Copy constructor called" << std::endl;
	value = otherF.getRawBits();
}

Fixed &Fixed::operator=(Fixed const &otherF)
{
	std::cout << "Assignation operator called" << std::endl;
	value = otherF.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

int Fixed::toInt(void) const
{
	return (value >> Fixed::nbBits);
}

float Fixed::toFloat(void) const
{
	return ((float)value / (float)(1 << Fixed::nbBits));
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return (out);
}
