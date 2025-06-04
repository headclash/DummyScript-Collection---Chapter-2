#include <iostream>
#include "algorithms.h"

void Algorithms::numPrint()
{
	int add{ 1 };
	int counter{};
	int cap{};

	// Set a cap value for the count to end at.
	std::cout << "To what number should the count go?";
	std::cin >> cap;

	// Count towards and print every integer up to the cap.
	do {
		counter = (add++);
		std::cout << counter << ", ";
	} while (counter < cap);

}

void Algorithms::primePrint() {
	//DO AT HOME
}

void Algorithms::oddPrintFor() {

	int n{ 10 };

	// Print all odd numbers *up* to 20;
	do {
		if (n % 2 == 1) {
			std::cout << n << " ";
		}
		n = n + 1;
	} while (n <= 20);

}

void Algorithms::oddPrintBack() {
	int n{ 19 };

	// Print all odd numbers *down* from 20;
	do {
		if (n % 2 != 0) {
			std::cout << n << " ";
		}
		n = n - 1;
	} while (n >= 11);
}

void Algorithms::arraySum() {
	int vector[3];
	int x{};
	int i{};
	int y{};

	for (i = 0; i <= 2; i++) {
		std::cin >> x;
		vector[i] = x;
	}

	for (i = 0; i <= 2; i++) {
		y += vector[i];
	}

	std::cout << y;


}