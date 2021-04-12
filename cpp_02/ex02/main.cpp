#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	a = Fixed(42.42f);
	Fixed c(5);
	Fixed d(6.95f);
	Fixed e(d - c);
	Fixed f(d + c);
	Fixed g(d / c);

	std::cout << "a = " << a << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "f = " << f << std::endl;
	std::cout << "g = " << g << std::endl;
	std::cout << "max between d and c = " << Fixed::max(d, c) << std::endl;
	std::cout << "max between d and c = " << max(d, c) << std::endl;
	std::cout << "min between e and f = " << Fixed::min(e, f) << std::endl;
	std::cout << "min between e and f = " << min(e, f) << std::endl;
	std::cout << "a > c == true " << (a > c) << std::endl;
	std::cout << "a < c == false " << (a < c) << std::endl;
	std::cout << "a == c == false " << (a == c) << std::endl;
	std::cout << "a != c == true " << (a != c) << std::endl;
	std::cout << "a >= c == true " << (a >= c) << std::endl;
	std::cout << "a <= c == false " << (a <= c) << std::endl;

	return 0;
}
