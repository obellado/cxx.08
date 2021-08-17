#pragma once
#ifndef __MutantStack__HPP__
# define __MutantStack__HPP__
# include <iostream>
# include <list>
# include <vector>
# include <deque>
# include <stack>
# include <exception>
# include <algorithm>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack() : std::stack<T>() {}
		virtual ~MutantStack() {}

		MutantStack(const MutantStack & copy) {
			*this = copy;
		}
		MutantStack & operator=(const MutantStack & copy) {
			std::stack<T>::operator=(copy);
			return (*this);
		}

		typedef typename std::deque<T>::iterator iterator;

		iterator	begin() { return (this->c.begin()); }
		iterator	end() { return (this->c.end()); }
};

#endif