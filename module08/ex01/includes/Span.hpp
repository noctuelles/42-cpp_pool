
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 13:17:19 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/09 13:17:19 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_H
# define SPAN_CLASS_H
 
# include <iostream>
# include <list>
# include <cmath>

template <typename T>
void	print_t(T const & t)
{
	std::cout << t << '\n';
}

class	Span
{

	public:

		class	TooManyNumbers : public std::exception
		{
			public:

				virtual char const *	what() const throw();

		};

		class	CannotComputeSpan : public std::exception
		{
			public:

				virtual char const *	what() const throw();

		};

		Span(void);
		Span(unsigned int N);
		Span(Span const & src);
		~Span(void);

		Span &	operator=(Span const & rhs);

		void			addNumber(int i);
		unsigned int	longestSpan(void) const;
		unsigned int	shortestSpan(void) const;
		void			print(void) const;

		template <typename T>
		void	insertNumbers(typename T::const_iterator const & a, typename T::const_iterator const & b)
		{
			size_t	distance;

			distance = static_cast<size_t>(std::abs(std::distance(a, b)));
			if (distance > _size)
				throw(TooManyNumbers());
			else if (distance)
			{
				_list.insert(_list.end(), a, b); 
				_curr_size += distance;
			}
		}

	private:

		std::list<int>	_list;
		size_t			_curr_size;
		size_t			_size;

};

#endif // SPAN_CLASS_H
