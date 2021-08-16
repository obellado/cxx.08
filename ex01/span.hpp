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
		unsigned int getN() const;
		unsigned int getIt() const;
		std::vector<int> getVector() const;

		class NoAdd: public std::exception {
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