#include "span.hpp"

int main( void ) {

	Span sp = Span(5);

	std::cout << "Size of newborn : " << sp.getVector().size() << std::endl;

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(12);
	sp.addNumber(8);
	
	Span sp2 = sp;

	std::cout << "Size of copied one: " << sp.getVector().size() << std::endl;
	
	std::cout << "LongestSpan  : " << sp2.shortestSpan() << std::endl;	
	std::cout << "ShortestSpan : " << sp2.longestSpan() << std::endl;

	Span spb = Span(10000000);
	std::vector<int> v(6000000,42);

	
	std::cout << "Size of new Big one: " << spb.getVector().size() << std::endl;
	spb.addNumber(v.begin(), v.end());
	try 
	{
		spb.addNumber(v.begin(), v.end());
	}
	catch (std::exception &e) 
	{ 
		std::cerr << e.what() << std::endl; 
	}
	std::cout << "Size: " << spb.getVector().size() << std::endl;
	std::cout << "Element[0] = " << spb.getVector()[0] << std::endl;
	std::cout << "Element[5999999] = "  << spb.getVector()[5999999] << std::endl;
	std::cout << "Element[6000000] = "  << spb.getVector()[6000000] << std::endl;
	std::cout << "Element[9999999] = "  << spb.getVector()[9999999] << std::endl;
	std::cout << "LongestSpan  : " << spb.shortestSpan() << std::endl;	
	std::cout << "ShortestSpan : " << spb.longestSpan() << std::endl;

	return (0);
}