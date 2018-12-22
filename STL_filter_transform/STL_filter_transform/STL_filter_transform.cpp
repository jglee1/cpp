// STL_filter_transform.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>

#include "person.h"

std::string namefn(const person_t &person)
{
	return person.name();
}

bool is_female(const person_t &person)
{
	return person.gender() == person_t::female;
}

bool is_not_female(const person_t &person)
{
	return !is_female(person);
}

template <typename FilterFunction>
std::vector<std::string> names_for(
		const std::vector<person_t>& people,
		FilterFunction filter)
{	
	std::vector<std::string> result;

	for (const person_t& person : people) {
		if (filter(person)) {
			result.push_back(namefn(person));
		}
	}

	return result;
}


//tail-recursive implementation

template <typename FilterFunction, typename Iterator, typename OutputFunction>
std::vector<std::string> names_for_helper(
	Iterator people_begin,
	Iterator people_end,
	FilterFunction filter,
	OutputFunction outputfn,
	std::vector<std::string> previously_collected)
{
	if (people_begin == people_end) {
		return previously_collected;
	}
	else {
		const auto head = *people_begin;

		if (filter(head)) {
			previously_collected.push_back(outputfn(head));
		}

		return names_for_helper(people_begin + 1, people_end, filter, outputfn, std::move(previously_collected));
	}

}

template <typename FilterFunction, typename Iterator, typename OutputFunction>
std::vector<std::string> names_for(
	Iterator people_begin,
	Iterator people_end,
	FilterFunction filter,
	OutputFunction outputfn)
{
	return names_for_helper(people_begin, 
							people_end, 
							filter,
							outputfn,
							{});
}

// Implementation using folding

std::vector<std::string> append_name_if(
	std::vector<std::string> previously_collected,
	const person_t& person)
{
	if (is_female(person)) {
		previously_collected.push_back(namefn(person));
	}
	return previously_collected;
}


std::vector<std::string> names_for_v2(
	const std::vector<person_t>& people)
{
	return std::accumulate(
		people.cbegin(),
		people.cend(),
		std::vector<std::string>{},
		append_name_if);
}

int main(int argc, char *argv[])
{
	std::vector<person_t> people{
		{ "David"  , person_t::male   },
		{ "Jane"   , person_t::female },
		{ "Martha" , person_t::female },
		{ "Peter"  , person_t::male   },
		{ "Rose"   , person_t::female },
		{ "Tom"    , person_t::male   }
	};

	// Filtering the collection by copying (see section 2.2.5)
	std::vector<person_t> females;

	// The std::copy_if algorithm copies items that satisfy the
	// is_female predicate into the destination collection
	std::copy_if(people.cbegin(), people.cend(),
		std::back_inserter(females),
		is_female);

	// Transforming to get the names
	std::vector<std::string> names(females.size());

	std::transform(females.cbegin(), females.cend(),
		names.begin(),
		namefn);

	for (const auto& name : names) {
		std::cout << name << '\n';
	}

	std::cout << '\n';

	// Use template with function argument
	std::vector<std::string> names2;
	names2 = names_for(people, is_female);
	
	for (const auto& name : names2) {
		std::cout << name << '\n';
	}

	std::cout << '\n';

	// Use tail-recursive implementation
	std::vector<std::string> names3;
	names3 = names_for(people.cbegin(), people.cend(), is_female, namefn);

	for (const auto& name : names3) {
		std::cout << name << '\n';
	}

	std::cout << '\n';

	// Use folding
	std::vector<std::string> names4;
	names4 = names_for_v2(people);

	for (const auto& name : names4) {
		std::cout << name << '\n';
	}

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
