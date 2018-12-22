#include "pch.h"
#include <iostream>
#include <vector>
#include <numeric>

// average scores
double average_score(const std::vector<int>& scores)
{
	return std::accumulate(
		scores.cbegin(), scores.cend(),
		0
	) / (double)scores.size();
}

/*
double average_score2(const std::vector<int>& scores)
{
	return std::reduce(
		std::execution::par,
		scores.cbegin(), scores.cend(),
		0
	) / (double)scores.size();
}
*/

// scores multiplication
double scores_product(const std::vector<int>& scores)
{
	return std::accumulate(
		scores.cbegin(), scores.cend(),
		1,
		std::multiplies<int>()
	) / (double)scores.size();
}