#ifndef SPAN_HPP
# define SPAN_HPP
#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <iterator>
#include <stdlib.h>
#include <ctime>

class Span
{
public:

	Span(unsigned int n);
	Span(Span const &other);
	Span &operator=(Span const &other);
	~Span();

	class AlreadyTooManyNumbersException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class NotEnoughNumbersException : public std::exception
	{
		virtual const char *what() const throw();
	};

	void addNumber(int value);
	template<typename Iterator>
	void addNumber(Iterator begin, Iterator end)
	{
		if (this->list.size() + std::distance(begin, end) <= this->n)
			this->list.insert(this->list.end(), begin, end);
		else
			throw (Span::AlreadyTooManyNumbersException());
	}
	int shortestSpan();
	int longestSpan();

private:

	Span();
	unsigned int n;
	std::list<int> list;
};

#endif
