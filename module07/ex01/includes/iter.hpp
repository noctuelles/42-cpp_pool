/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 12:05:59 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/08 13:43:04 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <stddef.h>

template <typename A, typename F>
void	iter(A tab[], size_t size, F f)
{
	for (size_t i = 0; i < size; i++)
		f(tab[i]);
}

#endif
