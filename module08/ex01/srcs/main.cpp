#include <exception>
#include <list>
#include <iostream>
#include "Span.hpp"
#include <vector>
#include <algorithm>
#include <ctime>

# define MAX_NBR 10

int main()
{
	std::srand(unsigned(std::time(NULL)));

	{
		Span span = Span(21);

		for (size_t i = 1; i < 22; i++)
			span.addNumber(i * 2);
		try
		{
			span.addNumber(42);
		}
		catch (Span::TooManyNumbers const & e)
		{
			std::cerr << "Oups ! " << e.what() << '\n';
		}
		span.print();
		std::cout << "Shortest span : " << span.shortestSpan() << '\n';
		std::cout << "Longest span  : " << span.longestSpan() << '\n';
	}
	std::cout << '\n';
	{
		Span span = Span(MAX_NBR);
		std::list<int> to_insert(MAX_NBR);

		std::generate(to_insert.begin(), to_insert.end(), std::rand);
		span.insertNumbers<std::list<int> >(to_insert.begin(), to_insert.end());

		span.print();
		std::cout << "Shortest span : " << span.shortestSpan() << '\n';
		std::cout << "Longest span  : " << span.longestSpan() << '\n';
	}
	std::cout << '\n';
	{
		Span span = Span(1);
		Span span_empty = Span();

		span.print();
		span.addNumber(12);
		try
		{
			span.shortestSpan();
			span.longestSpan();
		}
		catch (Span::CannotComputeSpan const & e)
		{
			std::cerr << "Oups ! " << e.what() << '\n';
		}
		try
		{
			span_empty.shortestSpan();
		}
		catch (Span::CannotComputeSpan const & e)
		{
			std::cerr << "Oups ! " << e.what() << '\n';
		}
	}
	std::cout << '\n';
	{
		Span span = Span(2);

		span.addNumber(21);
		span.addNumber(42);
		std::cout << "Shortest span : " << span.shortestSpan() << '\n';
		std::cout << "Longest span  : " << span.longestSpan() << '\n';
	}
	std::cout << '\n';
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span  : " << sp.longestSpan() << std::endl;
	}

	return (0);
}
