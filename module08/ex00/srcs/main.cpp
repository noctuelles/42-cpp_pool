/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:50:39 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/10 16:26:03 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int	main(void)
{
	{
		std::vector<int>	v (4, 0);

		v[0] = 10;
		v[1] = 21;
		v[2] = 42;
		v[3] = 84;
		std::cout << *easyfind(v, 42) << '\n';
		try
		{
			std::cout << *easyfind(v, 12387) << '\n';
		}
		catch (std::exception const & e)
		{
			std::cout << "Woups ! " << e.what() << '\n';
		}
	}
}
