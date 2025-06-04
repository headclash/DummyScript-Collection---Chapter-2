#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#pragma once
#include <vector>

class Algorithms {
public:

	std::vector<int> numPrint(int cap_value);
	std::vector<int> primePrint(int cap_value);
	int arraySum(const std::vector<int>& numbers);
};

#endif