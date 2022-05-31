/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:05:21 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/31 11:25:22 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

#include <iostream>

// # define DEBUG_MSG

class	Fixed
{
	public:

		Fixed(void);
		Fixed(int const n);
		Fixed(float const f);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed &			operator=(Fixed const & rhs); 
		Fixed const &	operator=(Fixed const & rhs) const; 

		/* Relation operators */

		bool	operator>(Fixed const & rhs) const;
		bool	operator<(Fixed const & rhs) const;
		bool	operator>=(Fixed const & rhs) const;
		bool	operator<=(Fixed const & rhs) const;
		bool	operator==(Fixed const & rhs) const;
		bool	operator!=(Fixed const & rhs) const;

		/* Binary operators */

		Fixed	operator+(Fixed const & rhs) const;
		Fixed	operator-(Fixed const & rhs) const;
		Fixed	operator*(Fixed const & rhs) const;
		Fixed	operator/(Fixed const & rhs) const;

		/* Unary operators */

		Fixed	operator++(void);
		Fixed	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;

		static Fixed &			min(Fixed & lhs, Fixed & rhs);
		static Fixed const &	min(Fixed const & lhs, Fixed const & rhs);
		static Fixed &			max(Fixed & lhs, Fixed & rhs);
		static Fixed const &	max(Fixed const & lhs, Fixed const & rhs);

	private:

		int					_n;
		static int const	_nbrBits = 8;

		void	_showRawBits(int const n) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& rhs);

#endif // FIXED_CLASS_H
