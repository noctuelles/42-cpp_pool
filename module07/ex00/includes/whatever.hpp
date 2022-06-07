/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:53:55 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/07 12:01:29 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T & a, T & b)
{
	T	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T const &	min(T const & a, T const & b)
{
	if (b <= a)
		return (b);
	else
		return (a);
}

template <typename T>
T const &	max(T const & a, T const & b)
{
	if (b >= a)
		return (b);
	else
		return (a);
}

#endif
