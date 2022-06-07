/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:00:33 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/07 14:10:07 by plouvel          ###   ########.fr       */
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

#endif
