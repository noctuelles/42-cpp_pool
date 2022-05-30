/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:24:49 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/30 19:36:33 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	return ;
}

Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y)
{
	return ;
}

Point::Point(Point const & src)
{
	*this = src;
}

Point::~Point(void)
{
	return ;
}

Point &	Point::operator=(Point const & rhs)
{
	this->_x = rhs._x;
	this->_y = rhs._y;
	return (*this);
}

Fixed const &	Point::getX(void) const
{
	return (this->_x);
}

Fixed const &	Point::getY(void) const
{
	return (this->_y);
}
