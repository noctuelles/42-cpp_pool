/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:56:21 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/30 12:33:11 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	Fixed a = Fixed(2.0f);
	Fixed b = Fixed(3.0f);

	std::cout << Fixed::min(a, b) << std::endl;
return 0;
}
