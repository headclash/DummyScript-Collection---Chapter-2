#include <iostream>
#include <numeric>
#include "algorithms.h"
#include <vector>

// Generates a vector of numbers from 1 to cap_value (inclusive).
// If cap_value <= 0, returns a vector containing only 1.
std::vector<int> Algorithms::numPrint(int cap_value)
{
	std::vector<int> generated_numbers;

	if (cap_value <= 0) {
		// If cap_value is zero or negative, return {1}
		generated_numbers.push_back(1);
		return { 1 };
	}
	if (cap_value > 0) {
		// Fill the vector with numbers from 1 to cap_value
		for (int i = 1; i <= cap_value; i++) {
			generated_numbers.push_back(i);
		}
		return generated_numbers;
	}
	// Return empty vector for other cases (should not occur)
	return {};
}

// Generates a vector of all prime numbers up to cap_value (inclusive).
std::vector<int> Algorithms::primePrint(int cap_value) {
	std::vector<int> generated_numbers;

	if (cap_value < 2) {
		// No primes less than 2
		return generated_numbers;
	}

	for (int n = 2; n <= cap_value; n++) {
		bool is_prime = true;

		// Check if n is divisible by any number from 2 to sqrt(n)
		for (int i = 2; i * i <= n; i++) {
			if (n % i == 0) {
				is_prime = false;
				break;
			}
		}

		if (!is_prime) {
			continue;
		}
		// If n is prime, add to the vector
		generated_numbers.push_back(n);
	}

	return generated_numbers;
}

// Returns the sum of all elements in the input vector.
int Algorithms::arraySum(const std::vector<int>& numbers) {
	int sum{ 0 };
	// Use std::accumulate to sum all elements in the vector
	sum = std::accumulate(numbers.begin(), numbers.end(), 0);

	return sum;
}