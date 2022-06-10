#include "MutantStack.hpp"
#include "test.hpp"
#include <iostream>
#include <algorithm>

int main()
{
	MutantStack<int> mstack;

	for (size_t i = 1; i < 22; i++)
		mstack.push(i * 2);
	std::cout << "Printing the stack content using iterators !" << "\n\n";
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++)
	{
		std::cout << *it << '\n';
	}
	std::cout << '\n';
	std::cout << "Using for_each algorithm to add one to each element and print the content !" << "\n\n"; 
	std::for_each(mstack.begin(), mstack.end(), add_one<int>);
	std::cout << '\n';
	std::for_each(mstack.begin(), mstack.end(), print<int>);
	std::cout << '\n';

	return (0);
}
