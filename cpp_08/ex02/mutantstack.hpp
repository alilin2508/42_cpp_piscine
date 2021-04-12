#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <list>

template<typename T>
class MutantStack : public std::stack<T>
{
public:

	MutantStack();
	MutantStack(MutantStack<T> const &other);
	MutantStack<T> &operator=(MutantStack<T> const &other);
	~MutantStack();

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin(void);
	iterator end(void);

};

#include "mutantstack.ipp"

#endif
