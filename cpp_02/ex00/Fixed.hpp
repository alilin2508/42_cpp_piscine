#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <iomanip>
#include <string>

class Fixed
{
public:

	Fixed();
	Fixed(Fixed const &otherF);
	Fixed &operator=(Fixed const &otherF);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);

private:

	int value;
	const static int nbBits = 8;
};

#endif
