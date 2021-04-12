#include "Fixed.hpp"

Fixed::Fixed():
		value(0)
{
}

Fixed::Fixed(int const value)
{
	this->value = (value << Fixed::nbBits);
}

Fixed::Fixed(float const value)
{
	this->value = roundf(value * (1 << Fixed::nbBits));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(Fixed const &otherF)
{
	value = otherF.getRawBits();
}

Fixed &Fixed::operator=(Fixed const &otherF)
{
	value = otherF.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (value);
}

void Fixed::setRawBits(int const raw)
{
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

Fixed Fixed::operator+(Fixed const &otherF)
{
	Fixed val(*this);

	val.setRawBits(this->getRawBits() + otherF.getRawBits());
	return (val);
}

Fixed Fixed::operator-(Fixed const &otherF)
{
	Fixed val(*this);

	val.setRawBits(this->getRawBits() - otherF.getRawBits());
	return (val);
}

Fixed Fixed::operator*(Fixed const &otherF)
{
	Fixed val(*this);
	long tmp, temp;

	tmp = ((long)this->getRawBits());
	temp = ((long)otherF.getRawBits());
	val.setRawBits((tmp * temp) / (1 << Fixed::nbBits));
	return (val);
}

Fixed Fixed::operator/(Fixed const &otherF)
{
	Fixed val(*this);
	long tmp, temp;

	tmp = ((long)this->getRawBits());
	temp = ((long)otherF.getRawBits());
	val.setRawBits((tmp * (1 << Fixed::nbBits)) / temp);
	return (val);
}

Fixed Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed val(*this);
	operator++();
	return (val);
}

Fixed Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed val(*this);
	operator--();
	return (val);
}

bool Fixed::operator>(Fixed const &otherF) const
{
	return (this->getRawBits() > otherF.getRawBits());
}

bool Fixed::operator>=(Fixed const &otherF) const
{
	return (this->getRawBits() >= otherF.getRawBits());
}

bool Fixed::operator<(Fixed const &otherF) const
{
	return (this->getRawBits() < otherF.getRawBits());
}

bool Fixed::operator<=(Fixed const &otherF) const
{
	return (this->getRawBits() <= otherF.getRawBits());
}

bool Fixed::operator==(Fixed const &otherF) const
{
	return (this->getRawBits() == otherF.getRawBits());
}

bool Fixed::operator!=(Fixed const &otherF) const
{
	return (this->getRawBits() != otherF.getRawBits());
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return (out);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed const &min(Fixed const &a, Fixed const &b)
{
	return (Fixed::min(a, b));
}

Fixed const &max(Fixed const &a, Fixed const &b)
{
	return (Fixed::max(a, b));
}

Fixed &min(Fixed &a, Fixed &b)
{
	return (Fixed::min(a, b));
}

Fixed &max(Fixed &a, Fixed &b)
{
	return (Fixed::max(a, b));
}
