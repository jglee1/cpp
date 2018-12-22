// STL_stable_partition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
//#include <iostream>

// stable_partition example
#include <iostream>     // std::cout
#include <algorithm>    // std::stable_partition
#include <vector>       // std::vector

bool IsOdd(int i) { return (i % 2) == 1; }

int main() {
	std::vector<int> myvector;

	// set some values:
	for (int i = 1; i < 10; ++i) myvector.push_back(i); // 1 2 3 4 5 6 7 8 9

	std::vector<int>::iterator bound;
	bound = std::stable_partition(myvector.begin(), myvector.end(), IsOdd);

	// print out content:
	std::cout << "odd elements:";
	for (std::vector<int>::iterator it = myvector.begin(); it != bound; ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	std::cout << "even elements:";
	for (std::vector<int>::iterator it = bound; it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
