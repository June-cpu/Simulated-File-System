#include "Folder.hpp"

int main(){

	File a;
	std::cout << a << std::endl;

	//test copy constructor
	File b(a);
	std::cout << b << std::endl;

	// test perameterized constructor 
	File c("test.txt", "test", nullptr);
	std::cout << c << std::endl;

	//test move constructor
	File d(std::move(c));
	std::cout << d << std::endl;

	//test copy assignment
	a = b;
	std::cout << a << std::endl;

	//test move assignment
	c = std::move(d);
	std::cout << c << std::endl;


	

}