#include <iostream>
#include <locale.h>
#include <vector>
#include "algorithms.h"
#include "extraFunc.h"

// Create a global pointer to an Algorithms object
Algorithms* algorithms = new Algorithms();

// Variable to store the user's menu selection
int menuOPT;

int main()
{
    // Set locale for proper character encoding
    setlocale(LC_ALL, "");

    std::cout << "Available Algorithms:\n";
    std::cout << "1. Print all numbers up to a selected value.\n";
    std::cout << "2. Print all prime numbers up to a certain value.\n";
    std::cout << "3. Sum up to 3 numbers.\n";

    // Prompt user to select an algorithm
    std::cout << "\nSelect a valid Algorithm: ";
    std::cin >> menuOPT;
    clearConsole();

    // Execute the selected algorithm based on user input
    switch (menuOPT) {
    case 1: {
        int cap;
        // Ask user for the upper limit for number printing
        std::cout << "Choose the cap for the count: ";
        std::cin >> cap;

        // Generate a vector of numbers up to the specified cap
        std::vector<int> algorithmoutput = algorithms->numPrint(cap);
        if (!algorithmoutput.empty()) {
            std::cout << "Generated numbers: ";

            // Print the generated numbers separated by commas
            for (size_t i = 0; i < algorithmoutput.size(); ++i) {
                std::cout << algorithmoutput[i];

                if (i < algorithmoutput.size() - 1) {
                    std::cout << ", ";
                }
            }
        }
        break;
    }

    case 2: {
        int cap;
        // Ask user for the upper limit for prime number generation
        std::cout << "Choose the cap for the prime count: ";
        std::cin >> cap;

        // Generate a vector of prime numbers up to the specified cap
        std::vector<int> algorithmoutput = algorithms->primePrint(cap);
        if (!algorithmoutput.empty()) {
            std::cout << "Sequence of Prime numbers up to the Cap: ";
            // Print the generated prime numbers separated by commas
            for (size_t i = 0; i < algorithmoutput.size(); ++i) {
                std::cout << algorithmoutput[i];

                if (i < algorithmoutput.size() - 1) {
                    std::cout << ", ";
                }
            }
        }
        break;
    }

    case 3: {
        std::vector<int> numberSum(3);
        int i = 0;

        // Prompt user to enter three numbers for summation
        std::cout << "Enter 3 numbers for the sum (separated with spaces): ";
        for (i = 0; i <= 2; i++) {
            std::cin >> numberSum[i];
        }

        // Calculate the sum of the three numbers
        int final_sum = algorithms->arraySum(numberSum);
        std::cout << "The sum of the numbers is: " << final_sum << "\n";
        break;
    }

    }

    // Clean up the dynamically allocated Algorithms object
    delete algorithms;
    return 0;
}