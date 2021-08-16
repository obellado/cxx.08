#include "span.hpp"

int main( void ) {

	Span sp = Span(10);

	std::cout << sp.getVector().size() << std::endl;
	std::cout << sp.getVector().capacity() << std::endl;

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.addNumber(100);
	sp.addNumber(200);
	sp.addNumber(250);
	sp.addNumber(400);
	sp.addNumber(1100);
	
	Span sp2 = Span(sp);

	std::cout << sp2.getVector().size() << std::endl;
	std::cout << sp2.getVector().capacity() << std::endl;
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	std::cout << sp2.longestSpan() << std::endl;

	return (0);
}