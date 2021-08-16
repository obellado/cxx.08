#pragma once
#ifndef __EASYFIND__HPP__
# define __EASYFIND__HPP__
# include <iostream>
# include <list>
# include <vector>
# include <exception>
# include <algorithm>

class NoInt : public std::exception {
	public:
		virtual const char* what() const throw() { return ("No this int in a container!"); }
};

template< typename T >
int easyfind(T & cont, int n){
	typename T::iterator it = find(cont.begin(), cont.end(), n);
	if (it == cont.end())
		throw NoInt();
	return (distance(cont.begin(), it));
}

#endif