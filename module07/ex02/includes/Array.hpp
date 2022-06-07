/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:14:49 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/07 18:28:42 by plouvel          ###   ########.fr       */
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
			delete [] (_array);
			_size = rhs.size();
			_array = new A[_size];
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = rhs._array[i];
			return (*this);
		}

		A &	operator[](unsigned int i)
		{
			if (i >= _size)
				throw(std::exception());
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
