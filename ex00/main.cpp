#include "easyfind.hpp"

int main( void ) {
	std::list<int> list;

	list.push_back(0);
	list.push_back(1);
	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(5);
	list.push_back(8);

	std::cout << "Searched value \'1\' in list: " << ::easyfind(list, 1) << std::endl;
	std::cout << "Searched value \'8\' in list: " << ::easyfind(list, 8) << std::endl;
	try{
		std::cout << "Searched value \'13\' in list: " << ::easyfind(list, 13) << std::endl;}
	catch( std::exception &e ){
		std::cerr << e.what() << std::endl;}

	std::vector<int> vector;

	vector.push_back(0);
	vector.push_back(1);
	vector.push_back(1);
	vector.push_back(2);
	vector.push_back(3);
	vector.push_back(5);
	vector.push_back(8);

	std::cout << "Searched value \'1\' in VECTOR: " << ::easyfind(list, 1) << std::endl;
	std::cout << "Searched value \'8\' in VECTOR: " << ::easyfind(list, 8) << std::endl;
	try{
		std::cout << "Searched value \'13\' in VECTOR: " << ::easyfind(list, 13) << std::endl;}
	catch( std::exception &e ){
		std::cerr << e.what() << std::endl;}

	return (0);
}