/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:38:30 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/08 18:15:26 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <exception>
#include <iterator>

template <typename T>
typename T::const_iterator	easyfind(T const & c, int i)
{
	typename T::const_iterator	it;

	it = std::find(c.begin(), c.end(), i);
	if (it == c.end())
		throw (std::exception());
	return (it);
}
