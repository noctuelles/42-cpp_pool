/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:37:07 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/08 18:18:38 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "whatever.hpp"

int	main(void)
{
	int	a = 21;
	int b = 42;
	std::string  s1 = "Bonjour";
	std::string  s2 = "toi";

	std::cout << "before swap :" << std::endl << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl << std::endl;
	::swap<int>(a, b);
	std::cout << "after swap :" << std::endl << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl << std::endl;
	::swap<int>(a, b);

	std::cout << "again swap :" << std::endl << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl << std::endl;

	std::cout << "before swap :" << std::endl << std::endl;
	std::cout << "s1 : " << s1 << std::endl;
	std::cout << "s2 : " << s2 << std::endl << std::endl;

	::swap<std::string>(s1, s2);
	std::cout << "after swap :" << std::endl << std::endl;
	std::cout << "s1 : " << s1 << std::endl;
	std::cout << "s2 : " << s2 << std::endl << std::endl;

	std::cout << "adress of b : " << &b << std::endl;
	std::cout << "min between " << a << " and " << b << " : " << ::min<int>(a, b) << std::endl;
	a = 42;
	std::cout << "min between " << a << " and " << b << " : " << &::min<int>(a, b) << std::endl;
	a = 21;
	std::cout << "max between " << a << " and " << b << " : " << ::max<int>(a, b) << std::endl;
	a = 42;
	std::cout << "max between " << a << " and " << b << " : " << &::max<int>(a, b) << std::endl << std::endl;

	std::cout << "min between " << s1 << " and " << s2 << " : " << ::min<std::string>(s1, s2) << std::endl;
	::swap<std::string>(s1, s2);
	std::cout << "min between " << s1 << " and " << s2 << " : " << ::min<std::string>(s1, s2) << std::endl;
	std::cout << "max between " << s1 << " and " << s2 << " : " << ::max<std::string>(s1, s2) << std::endl;
	::swap<std::string>(s1, s2);
	std::cout << "max between " << s1 << " and " << s2 << " : " << ::max<std::string>(s1, s2) << std::endl;
}
