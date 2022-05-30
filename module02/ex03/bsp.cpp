/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:28:25 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/30 19:29:55 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iomanip>
#include <cmath>

//# define DEBUG

static Fixed	getSign(Point const a, Point const b, Point const point)
{	

	Point	vec_dir      = Point(	b.getX() - a.getX(),
									b.getY() - a.getY());

	Point	vec_to_point = Point(	point.getX() - a.getX(),
									point.getY() - a.getY());

	Fixed	nbr          = Fixed(	vec_dir.getY() * vec_to_point.getX() -
									vec_dir.getX() * vec_to_point.getY());  

#ifdef DEBUG
	std::cout << nbr << std::endl;
#endif

	return (nbr);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	signCompareAB_C     = getSign(a, b, c);
	Fixed	signCompareAC_B     = getSign(a, c, b);
	Fixed	signCompareBC_A     = getSign(b, c, a);

#ifdef DEBUG
	std::cout << std::endl;
#endif

	Fixed	signCompareAB_Point = getSign(a, b, point);
	Fixed	signCompareAC_Point = getSign(a, c, point);
	Fixed	signCompareBC_Point = getSign(b, c, point);

	if (signCompareAB_C > 0 && signCompareAB_Point < 0)
		return (false);
	else if (signCompareAB_C < 0 && signCompareAB_Point > 0)
		return (false);

	if (signCompareAC_B > 0 && signCompareAC_Point < 0)
		return (false);
	else if (signCompareAC_B < 0 && signCompareAC_Point > 0)
		return (false);

	if (signCompareBC_A > 0 && signCompareBC_Point < 0)
		return (false);
	else if (signCompareBC_A < 0 && signCompareBC_Point > 0)
		return (false);

	return (true);
}
