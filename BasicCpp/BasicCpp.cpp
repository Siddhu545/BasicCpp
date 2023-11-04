#include <array>
#include <iostream>
#include <span>
#include <string>
using namespace std;

void doNothing() {
	string operation;
	int x{ };
	std::cout << "Enter an integer\n";
	std::cin >> x;
	std::cout << "Enter What you want do\n";
	std::cin >> operation;
	if (operation == "double") {
		std::cout << "Double that number is :\n" << x * 2;
	}
	else if (operation == "triple") {
		std::cout << "triple that number is :\n" << x * 3;
	}
	else {
		std::cout << "plz. give proper input";
	}
}


int main() {
	doNothing();
	return 0;
}