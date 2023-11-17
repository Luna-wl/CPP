#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>
#include <exception>
#include <iterator>
#include <vector>
#include <algorithm>

class NotFound : public std::exception {
	const char * what () const throw () {
		return "Element not found in the container";
	}
};

template <typename T>
int easyfind(T& a, int n) {
	std::vector<int>::iterator it = std::find(a.begin(), a.end(), n);
	if (it != a.end())
		return *it;
	else
		throw NotFound();
}

#endif
