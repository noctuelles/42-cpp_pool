/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:05:21 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/31 10:54:58 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

#include <iostream>

class	Fixed
{
	public:

		Fixed(void);
		Fixed(int const n);
		Fixed(float const f);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed & operator=(Fixed const & rhs); 

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;

	private:

		int					_n;
		static int const	_nbrBits = 8;

		void	_showRawBits(int const n) const;

};

std::ostream& operator<<(std::ostream& os, const Fixed& rhs);

#endif // FIXED_CLASS_H
