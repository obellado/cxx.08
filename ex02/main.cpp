#include "mutantstack.hpp"

int main() {

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "Mstack's top : " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "Mstack's size : " << mstack.size() << std::endl;

	mstack.push(3); 
	mstack.push(5); 
	mstack.push(737); 
	mstack.push(0);


	std::cout << std::endl << "Mutant Stack : " << std::endl;

	MutantStack<int>::iterator it = mstack.begin(); 
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;

	while (it != ite) {
    	std::cout << *it << std::endl;
		++it; 
	}

	std::stack<int> s(mstack); 

	std::cout << "Copied stack's top : " << s.top() << std::endl;
	std::cout << "Copied stack's size : " << s.size() << std::endl;

	s.push(7);
	mstack.swap(s);

	std::cout << "S stack's top : " << s.top() << std::endl;
	std::cout << "S stack's size : " << s.size() << std::endl;

	std::cout << "Mstack's top : " << mstack.top() << std::endl;
	std::cout << "Mstack's size : " << mstack.size() << std::endl;
	
	std::cout << std::endl << "Swapped Mutant Stack : " << std::endl;

	it = mstack.begin(); 
	ite = mstack.end();

	while (it != ite) {
    	std::cout << *it << std::endl;
		++it; 
	}

	return 0;
}