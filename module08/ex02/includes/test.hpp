/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:18:54 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/10 14:19:55 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
# define TEST_HPP

# include <iostream>

template <typename T>
void	add_one(T & t)
{
	t++;
}

template <typename T>
void	print(T const & t)
{
	std::cout << t << '\n';
}

#endif
