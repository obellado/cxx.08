#include "span.hpp"

Span::Span() {}
Span::~Span() {}
Span::Span(unsigned int N) : _n(N), _it(0), _vector(N) {
}

Span::Span( Span const & copy) : _n(copy.getN()), _vector(copy.getN()) {
	if (this != &copy) {
		this->_it = copy.getIt();
		this->_vector = copy.getVector();
	}
}

Span & Span::operator=(const Span & copy) {
	if (this != &copy) {
		this->_n = copy.getN();
		this->_it = copy.getIt();
		this->_vector.clear();
		this->_vector = copy.getVector();
	}
	return (*this);
}

void Span::addNumber(int number) {
	if (this->_it == this->_n)
		throw NoAdd();
	this->_vector[this->_it] = number;
	this->_it += 1;
}

unsigned int Span::getN() const { return (this->_n); }

unsigned int Span::getIt() const { return (this->_it); }

std::vector<int> Span::getVector() const { return (this->_vector); }

const char* Span::NoAdd::what() const throw()
{
	return ("Span is totally FULL");
}

const char* Span::NoSpan::what() const throw()
{
	return ("There is NO Span");
}

unsigned int Span::shortestSpan() const {
	std::vector<int> V = this->_vector;
	std::sort(V.begin(), V.end());
	std::vector<int>::const_iterator it;
	it = V.begin();
	int prev = *(it++);
	int diff = *(it) - prev;
	int min = diff;
	std::cout << prev << " " << diff << " " << min << std::endl;
    for (it = ++V.begin(); it != V.end(); ++it){
		diff = (*it) - prev;
		min = std::min(min, diff);
        prev = *it;
	}
	return (min);
}

unsigned int Span::longestSpan() const {
	unsigned int diff = 0;
	std::vector<int>::const_iterator it;
	it = max_element(this->_vector.begin(), this->_vector.end());
	diff = this->_vector[distance(this->_vector.begin(), it)];
	it = min_element(this->_vector.begin(), this->_vector.end());
	diff -= this->_vector[distance(this->_vector.begin(), it)];
	return (diff);
}