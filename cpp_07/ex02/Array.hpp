#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <iostream>
#include <string>

template<typename T>
class Array
{
public:

	Array();
	Array(unsigned int n);
	Array(Array &other);
	Array &operator=(Array &other);
	virtual ~Array();

	class OutOfLimitsException : public std::exception
	{
		virtual const char *what() const throw();
	};

	int size();
	T &operator[](unsigned int i);

private:

	T *tab;
	unsigned int sz;
};

#include "Array.ipp"

#endif
