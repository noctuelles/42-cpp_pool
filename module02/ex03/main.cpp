/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:56:21 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/30 19:29:55 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iomanip>

#define SIMPLE_TRIANGLE 

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
#ifdef SIMPLE_TRIANGLE
	Point	A = Point(6, 7);
	Point	B = Point(4, 3);
	Point	C = Point(8, 3);
	Point	D = Point(6, 5);
#endif

#ifdef COMPLEX_TRIANGLE
	Point	A = Point(6.11f, -3.57f);
	Point	B = Point(11.06f, 4.99f);
	Point	C = Point(13.25f, -10.6f);
	Point	D = Point(9.06f, -2.96f);
#endif

	std::cout << "Points :" << std::endl << std::endl;
	std::cout << "\tA\t(" << std::setw(10) << A.getX() << ", " << std::setw(10) << A.getY() << ")" << std::endl;
	std::cout << "\tB\t(" << std::setw(10) << B.getX() << ", " << std::setw(10) << B.getY() << ")" << std::endl;
	std::cout << "\tC\t(" << std::setw(10) << C.getX() << ", " << std::setw(10) << C.getY() << ")" << std::endl;
	std::cout << "\tD\t(" << std::setw(10) << D.getX() << ", " << std::setw(10) << D.getY() << ")" << std::endl << std::endl;

	std::cout << "Does the point D belong to the triangle ABC ?" << std::endl << std::endl;

	if (bsp(A, B, C, D) == true)
		std::cout << "\tYES!" << std::endl << std::endl;
	else
		std::cout << "\tNO!" << std::endl << std::endl;
}
