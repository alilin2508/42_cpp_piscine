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

private:

	int value;
	const static int nbBits = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif
