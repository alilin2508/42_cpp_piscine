#include "span.hpp"

int main()
{
	srand(time(NULL));
	try
	{
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Span sp = Span(3);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Span sp = Span(1);

		sp.addNumber(5);

		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Span sp = Span(1);

		sp.addNumber(5);

		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::list<int> lst;
		for (int i = 0; i < 1000; i++)
			lst.push_back(rand() % 1000);
		Span sp = Span(1000);
		sp.addNumber(lst.begin(), lst.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		/*
		std::list<int>::iterator iter = this->list.begin();
		while (iter != this->list.end())
		{
			std::cout << *iter << std::endl;
			iter++;
		}

		copy this code into the shortest span function to see the full list and understand the resuls !!
		*/
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
