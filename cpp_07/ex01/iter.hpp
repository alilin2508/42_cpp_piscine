#ifndef ITER_HPP
# define ITER_HPP
#include <iostream>
#include <string>

template<typename type>
void iter(type *array, int len, void (*f)(type const &item))
{
	for (int i =0; i < len; i++)
		(*f)(array[i]);
}

template<typename type>
void myPrint(type str)
{
	std::cout << str << std::endl;
}

#endif
