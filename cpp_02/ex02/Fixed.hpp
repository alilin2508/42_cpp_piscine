#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

class Fixed
{
public:

	Fixed();
	Fixed(int const value);
	Fixed(float const value);
	Fixed(Fixed const &otherF);
	Fixed &operator=(Fixed const &otherF);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	Fixed operator+(Fixed const &otherF);
	Fixed operator-(Fixed const &otherF);
	Fixed operator*(Fixed const &otherF);
	Fixed operator/(Fixed const &otherF);

	Fixed operator++(int);
	Fixed operator++();
	Fixed operator--(int);
	Fixed operator--();

	bool operator>(Fixed const &otherF) const;
	bool operator<(Fixed const &otherF) const;
	bool operator>=(Fixed const &otherF) const;
	bool operator<=(Fixed const &otherF) const;
	bool operator==(Fixed const &otherF) const;
	bool operator!=(Fixed const &otherF) const;

	static Fixed const &min(Fixed const &a, Fixed const &b);
	static Fixed const &max(Fixed const &a, Fixed const &b);
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);

private:

	int value;
	static const int nbBits = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);
Fixed const &min(Fixed const &a, Fixed const &b);
Fixed const &max(Fixed const &a, Fixed const &b);
Fixed &min(Fixed &a, Fixed &b);
Fixed &max(Fixed &a, Fixed &b);

#endif
