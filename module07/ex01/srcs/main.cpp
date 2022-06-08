/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 12:17:55 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/08 17:04:02 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "test.hpp"
#include <iostream>

int	main(void)
{
	int		i[] = {11, 21, 42, 84};
	float	f[] = {.11f, .21f, .42f, .84f};
	char s[] = "Bonjour la vie !";

	std::cout << "Printing int tab" << std::endl;
	::iter<int>(i, sizeof(i) / sizeof(int), print<int>);
	std::cout << "Adding one to each element" << std::endl;
	::iter<int>(i, sizeof(i) / sizeof(int), add_one<int>);
	std::cout << "Printing int tab" << std::endl;
	::iter<int>(i, sizeof(i) / sizeof(int), print<int>);
	std::cout << "Printing float tab" << std::endl;
	::iter<float>(f, sizeof(f) / sizeof(float), print<float>);
	std::cout << "Adding one to each element" << std::endl;
	::iter<float>(f, sizeof(f) / sizeof(float), add_one<float>);
	std::cout << "Printing int tab" << std::endl;
	::iter<float>(f, sizeof(f) / sizeof(float), print<float>);

	std::cout << "Printing C String" << std::endl;
	::iter<char>(s, sizeof(s) - 1, print<char>);
	std::cout << "Adding one to each element" << std::endl;
	::iter<char>(s, sizeof(s) - 1, add_one<char>);
	std::cout << "Printing C String" << std::endl;
	::iter<char>(s, sizeof(s) - 1, print<char>);
}
