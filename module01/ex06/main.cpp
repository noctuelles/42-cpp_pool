/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:44:21 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/26 20:00:26 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	Harl	theHarl = Harl();

	if (argc != 2)
	{
		std::cerr << "Usage : " << argv[0] << " <level_filter>" << std::endl;
		return (1);
	}
	theHarl.complain(std::string(argv[1]));
	return (0);
}
