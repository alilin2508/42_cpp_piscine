#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <iostream>
#include <string>
#include <algorithm>
#include <list>

template<typename T>
int easyfind(T const &tab, int value)
{
	typename T::const_iterator iter = std::find(tab.begin(), tab.end(), value);
	if (iter == tab.end())
		throw (std::exception());
	return (*iter);
}

#endif
