/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:14:49 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/08 18:21:18 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP_CLASS
# define ARRAY_TPP_CLASS

#include <cstdlib>
#include <exception>
#include <iostream>

template <typename A>
class	Array
{

	public:

		class	OutOfBounds : public std::exception
		{
			public:

				virtual char const * what(void) const throw()
				{
					return "Array out of bounds";
				}
		};

		Array<A>(void) : _array(NULL), _size(0) {}
		Array<A>(unsigned int size) : _array(new A[size]), _size(size) {}

		Array<A>(Array<A> const & src) : _array(NULL)
		{
			*this = src;
		}

		~Array<A>(void)
		{
			delete [] (_array);
		}

		Array<A> &	operator=(Array<A> const & rhs)
		{
			_size = rhs.size();
			if (this != &rhs)
			{
				delete [] (_array);
				_array = new A[_size];
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = rhs._array[i];
			}
			else
				_array = rhs._array;
			return (*this);
		}

		A &	operator[](size_t i)
		{
			if (i >= _size)
				throw(OutOfBounds());
			else
				return (_array[i]);
		}

		unsigned int	size(void) const
		{
			return (_size);
		}

	private:

		A *				_array;
		unsigned int	_size;
};

#endif
