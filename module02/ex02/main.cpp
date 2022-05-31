/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:56:21 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/31 11:14:02 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <iomanip>

int	main(void)
{
	Fixed	a = Fixed(12.12f);
	Fixed	b = Fixed(42);

	std::cout << "\ta : " << a << std::endl;
	std::cout << "\tb : " << b << std::endl << std::endl;

	std::cout << "a < b : " << std::boolalpha << (a < b) << std::endl;
	std::cout << "a > b : " << std::boolalpha << (a > b) << std::endl;
	std::cout << "b < a : " << std::boolalpha << (b < a) << std::endl;
	std::cout << "b > a : " << std::boolalpha << (b > a) << std::endl;
	std::cout << "b != a : " << std::boolalpha << (b != a) << std::endl;
	std::cout << "b == a : " << std::boolalpha << (b == a) << std::endl << std::endl;

	b = a;
	std::cout << "\tb : " << b << std::endl << std::endl;

	std::cout << "a <= b : " << std::boolalpha << (a <= b) << std::endl;
	std::cout << "a >= b : " << std::boolalpha << (a >= b) << std::endl;
	std::cout << "b <= a : " << std::boolalpha << (b <= a) << std::endl;
	std::cout << "b >= a : " << std::boolalpha << (b >= a) << std::endl;
	std::cout << "b != a : " << std::boolalpha << (b != a) << std::endl;
	std::cout << "b == a : " << std::boolalpha << (b == a) << std::endl << std::endl;

	std::cout << "a + b : " << a + b << std::endl;
	std::cout << "a - b : " << a - b << std::endl;
	std::cout << "a * b : " << a * b << std::endl;
	std::cout << "a / b : " << a / b << std::endl << std::endl;

	b = a + 6.23f;
	std::cout << "\tb : " << b << std::endl << std::endl;

	std::cout << "b + a : " << b + a << std::endl;
	std::cout << "b - a : " << b - a << std::endl;
	std::cout << "b * a : " << b * a << std::endl;
	std::cout << "b / a : " << b / a << std::endl << std::endl;

	std::cout << "\tb : " << b << std::endl << std::endl;

	std::cout << "Pre-increment b : " << ++b << std::endl;
	std::cout << "Pre-decrement b : " << --b << std::endl;
	std::cout << "Post-increment b : " << b++ <<  " -> " << b << std::endl;
	std::cout << "Post-decrement b : " << b-- <<  " -> " << b << std::endl << std::endl;

	std::cout << "\ta : " << a << std::endl;
	std::cout << "\tb : " << b << std::endl << std::endl;

	std::cout << "min(a, b) : " << Fixed::min(a, b) << std::endl;
	std::cout << "max(a, b) : " << Fixed::max(a, b) << std::endl;
	std::cout << "min(b, a) : " << Fixed::min(b, a) << std::endl;
	std::cout << "max(b, a) : " << Fixed::max(b, a) << std::endl;

	return 0;
}
