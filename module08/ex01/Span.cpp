
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 13:17:19 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/09 13:17:19 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <iterator>

Span::Span() : _list(), _size(0), _curr_size(0) {}

Span::Span(unsigned int N) : _list(), _size(N), _curr_size(0) {}

Span::Span(Span const & src)
{
	*this = src;
}

void	Span::addNumber(int i)
{
	if (_curr_size >= _size)
		throw (std::exception());
	else
	{
		_curr_size++;
		_list.push_back(i);
	}
}

unsigned int	Span::shortestSpan(void)
{
	if (_size == 0 || _size == 1)
		throw (CannotComputeSpan());
	else
	{
		unsigned int	shortestSpan;
		unsigned int	distance;

		shortestSpan = std::abs(*_list.begin() - *std::prev(_list.end()));
		for (std::list<int>::iterator it = _list.begin(); it != std::prev(_list.end()); it++)
		{
			distance = std::abs(*it - *std::next(it));
			if (distance < shortestSpan)
				shortestSpan = distance;
		}
		return (shortestSpan);
	}
}

unsigned int	Span::longestSpan(void)
{
	if (_size == 0 || _size == 1)
		throw (CannotComputeSpan());
	else
	{
		return (static_cast<unsigned int>(*std::max_element(_list.begin(), _list.end())
												- *std::min_element(_list.begin(), _list.end())));
	}
}

Span::~Span() {}

Span &	Span::operator=(Span const & rhs)
{
	if (this != &rhs)
	{
	}
	// std::cout << "Span assignement overload called." << std::endl;
	return (*this);
}

char const *	Span::TooManyNumbers::what() const throw()
{
	return ("Too many numbers in span");
}

char const *	Span::CannotComputeSpan::what() const throw()
{
	return ("Cannot compute span");
}

