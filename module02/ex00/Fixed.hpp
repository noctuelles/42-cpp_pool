/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:05:21 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/27 17:59:55 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

class	Fixed
{
	public:

		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed & operator=(Fixed const & rhs); 

		int		getRawBits(void);
		void	setRawBits(int const raw);

	private:

		int					_n;
		static int const	_nbrBits = 8;

};

#endif // FIXED_CLASS_H
