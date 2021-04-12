#include "whatever.hpp"

int main()
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

	char g = 'a';
	char h = 'A';

	std::cout << "g = " << g << " h = " << h << std::endl;
	std::cout << "min = " << ::min(g, h) << std::endl;
	std::cout << "max = " << ::max(g, h) << std::endl;
	::swap(g, h);
	std::cout << "g = " << g << " h = " << h << std::endl;

	std::string e = "abcdef";
	std::string f = "gheijk";

	std::cout << "e = " << e << " f = " << f << std::endl;
	std::cout << "min = " << ::min(e, f) << std::endl;
	std::cout << "max = " << ::max(e, f) << std::endl;
	::swap(e, f);
	std::cout << "e = " << e << " f = " << f << std::endl;

	return (0);
}
