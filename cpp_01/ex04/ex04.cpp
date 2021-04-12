#include <iostream>
#include <string>

int main()
{
	std::string str = std::string("HI THIS IS BRAIN");
	std::string *ptr_str = &str;
	std::string &ref_str = str;

	std::cout << "str = " << str << std::endl;
	std::cout << "ptr_str = " << *ptr_str << std::endl;
	std::cout << "ref_str = " << ref_str << std::endl;
}
