#include "span.hpp"

Span::Span(unsigned int n):
		n(n)
{
}

Span::Span(Span const &other):
		n(other.n), list(other.list)
{
}
Span &Span::operator=(Span const &other)
{
	this->n = other.n;
	this->list.clear();
	this->list = other.list;
	return (*this);
}

Span::~Span()
{
	this->list.clear();
}

const char *Span::AlreadyTooManyNumbersException::what() const throw()
{
	return ("Already too many numbers in the list");
}

const char *Span::NotEnoughNumbersException::what() const throw()
{
	return ("Not enough numbers to calculate the span");
}

void Span::addNumber(int value)
{
	if (this->list.size() < this->n)
		this->list.push_back(value);
	else
		throw (Span::AlreadyTooManyNumbersException());
}

int Span::longestSpan()
{
	if (this->list.empty() == true || this->list.size() == 1)
		throw(Span::NotEnoughNumbersException());
	else
	{

		std::list<int>::iterator max = std::max_element(this->list.begin(), this->list.end());
		std::list<int>::iterator min = std::min_element(this->list.begin(), this->list.end());
		return (*max - *min);
	}
}

int Span::shortestSpan()
{
	int diff;

	if (this->list.empty() == true || this->list.size() == 1)
		throw(Span::NotEnoughNumbersException());
	else
	{
		this->list.sort();
		std::list<int>::iterator first = this->list.begin();
		std::list<int>::iterator next = ++this->list.begin();
		diff = Span::longestSpan();
		while (next != this->list.end())
		{

			if (*next - *first < diff)
				diff = *next - *first;
			next++;
			first++;
		}
	}
	return (diff);
}
