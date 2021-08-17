#pragma once
#ifndef __SPAN__HPP__
# define __SPAN__HPP__
# include <iostream>
# include <list>
# include <vector>
# include <exception>
# include <algorithm>

class Span {
	public:
		Span();
		~Span();
		Span(unsigned int N);

		Span(const Span & copy);
		Span & operator=(const Span & copy);

		void addNumber(int number);
		template<typename T>
		void addNumber(T begin, T end) {
			if (this->_it + std::distance(begin, end) > this->getN())
				throw NoAddPacket();
			std::vector<int>::const_iterator it;
			it = this->_vector.begin() + this->getIt();
			this->_vector.insert(it, begin, end);
			this->_vector.resize(this->getN());
			this->_it += std::distance(begin, end);
		}
		unsigned int getN() const;
		unsigned int getIt() const;
		std::vector<int> getVector() const;

		class NoAdd: public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class NoAddPacket: public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class NoSpan: public std::exception {
			public:
				virtual const char *what() const throw();
		};

		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;

	private:

		unsigned int		_n;
		unsigned int		_it;
		std::vector<int>	_vector;

};

#endif