/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:22:27 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/31 10:51:18 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_CLASS_H
# define POINT_CLASS_H

#include "Fixed.hpp"

class	Point
{
	public:

		Point(void);
		Point(Fixed const x, Fixed const y);
		Point(Point const & src);

		Point & operator=(Point const & rhs); 

		Fixed const &	getX(void) const;
		Fixed const &	getY(void) const;
		~Point(void);

	private:

		Fixed const	_x;
		Fixed const	_y;

};

#endif
