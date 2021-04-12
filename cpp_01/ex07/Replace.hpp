#ifndef REPLACE_HPP
# define REPLACE_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>

class Replace
{
public:

	Replace();
	~Replace();

	static void replace(std::string const &filename, std::string const &s1, std::string const &s2);

private:

	static std::string replaceLine(std::string const &line, std::string const &s1, std::string const &s2);
};

#endif
