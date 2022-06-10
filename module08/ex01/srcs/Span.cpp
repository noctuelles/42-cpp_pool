
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
#include <algorithm>
#include <cmath>
#include <iterator>

Span::Span() : _list(), _curr_size(0), _size(0) {}

Span::Span(unsigned int N) : _list(), _curr_size(0), _size(N) {}

Span::Span(Span const & src)
{
	*this = src;
}

void	Span::addNumber(int i)
{
	if (_curr_size >= _size)
		throw (TooManyNumbers());
	else
	{
		_curr_size++;
		_list.push_back(i);
	}
}

unsigned int	Span::shortestSpan(void) const
{
	if (_size == 0 || this->_size == 1)
		throw (CannotComputeSpan());
	else
	{
		unsigned int					shortestSpan;
		unsigned int					distance;
		std::list<int>::const_iterator	last_elem;

		last_elem = static_cast<std::list<int>::const_iterator>(_list.end());
		--last_elem;
		shortestSpan = static_cast<unsigned int>(std::abs(_list.front() - _list.back()));
		for (std::list<int>::const_iterator it = _list.begin(); it != last_elem; )
		{
			distance = static_cast<unsigned int>(std::abs(*it - *(++it)));
			if (distance < shortestSpan)
				shortestSpan = distance;
		}
		return (shortestSpan);
	}
}

unsigned int	Span::longestSpan(void) const
{
	if (_size == 0 || _size == 1)
		throw (CannotComputeSpan());
	else
	{
		return (static_cast<unsigned int>(*std::max_element(_list.begin(), _list.end())
												- *std::min_element(_list.begin(), _list.end())));
	}
}

void	Span::print(void) const
{
	std::for_each(_list.begin(), _list.end(), print_t<int>);
}

Span::~Span() {}

Span &	Span::operator=(Span const & rhs)
{
	_list = rhs._list;
	_curr_size = rhs._curr_size;
	_size = rhs._size;
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
