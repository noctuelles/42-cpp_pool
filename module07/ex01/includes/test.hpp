/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:00:33 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/08 15:01:14 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
# define TEST_HPP

#include <iostream>

template <typename T>
void	print(T & t)
{
	std::cout << t << std::endl;
}

template <typename T>
void	add_one(T & t)
{
	t += 1;
}

template <typename T>
T up_2(T const & t)
{
    return t;
}

#endif
