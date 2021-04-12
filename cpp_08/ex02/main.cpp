#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "top = " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "top after pop = " << mstack.top() << std::endl;
	std::cout << "size = " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	while (it != ite)
	{
		std::cout << "mstack = " << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	while (s.size() != 0)
	{
		std::cout << "s = " << s.top() << std::endl;
		s.pop();
	}

	std::list<int> list;

	list.push_back(5);
	list.push_back(17);
	std::cout << "top = " << list.back() << std::endl;
	list.pop_back();
	std::cout << "top after pop = " << list.back() << std::endl;
	std::cout << "size = " << list.size() << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);
	std::list<int>::iterator b = list.begin();
	std::list<int>::iterator e = list.end();
	while (b != e)
	{
		std::cout << "list = " << *b << std::endl;
		++b;
	}
	return 0;
}
