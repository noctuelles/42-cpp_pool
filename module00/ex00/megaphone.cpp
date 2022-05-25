/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <plouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:33:26 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/24 19:04:04 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define HRED    "\e[0;91m"
#define HYEL    "\e[0;93m"
#define CRESET  "\e[0m"

#define DEFAULT HYEL "* " HRED "LOUD AND UNBEARABLE FEEDBACK NOISE" HYEL " *" CRESET

int	main(int argc, char **argv)
{
	for (size_t i = 1; i < (size_t) argc; i++)
	{
		std::string	s(argv[i]);

		std::cout << HRED;
		for (std::string::iterator it = s.begin(); it != s.end(); it++)
			std::cout << static_cast<char>(std::toupper(*it));
		std::cout << CRESET;
	}
	if (argc == 1)
		std::cout << DEFAULT;
	std::cout << std::endl;
	return (0);
}
