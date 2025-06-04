#include <iostream>
#include <locale.h>
#include "algorithms.h"

Algorithms* algorithms = new Algorithms();

int menuOPT;

int main()
{
	setlocale(LC_ALL, "");
	std::cout << "Available Algorithms:\n";
	std::cout << "1. Print all numbers up to a selected value.\n";
	std::cout << "2. Print all prime numbers up to a certain value.\n";
	std::cout << "3. Increment all Odd numbers up to a value.\n";
	std::cout << "4. Decrement all Odd numbers up to a value.\n";
	std::cout << "5. Sum all values inputted to an Array.\n";

	std::cout << "\nSelect a valid Algorithm: ";
	std::cin >> menuOPT;

	switch (menuOPT) {
	case 1:
		algorithms->numPrint();
		break;

	case 2:
		algorithms->primePrint();
		break;

	case 3:
		algorithms->oddPrintFor();
		break;

	case 4:
		algorithms->oddPrintBack();
		break;
	

	case 5:
		algorithms->arraySum();
		break;

}

	return 0;
}

