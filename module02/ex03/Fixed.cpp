/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:39:23 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/30 19:48:58 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _n(0)
{
#ifdef DEBUG_MSG
	std::cout << "Default constructor called" << std::endl;
#endif
}

Fixed::Fixed(int const n) : _n(n << _nbrBits)
{
#ifdef DEBUG_MSG
	std::cout << "Int constructor called" << std::endl;
#endif
}

Fixed::Fixed(float const f) : _n(roundf(f * (1 << _nbrBits)))
{
#ifdef DEBUG_MSG
	std::cout << "Float constructor called" << std::endl;
#endif
}

Fixed::Fixed(Fixed const & src)
{
#ifdef DEBUG_MSG
	std::cout << "Copy constructor called" << std::endl;
#endif
	*this = src;
}

Fixed::~Fixed(void)
{
#ifdef DEBUG_MSG
	std::cout << "Destructor called" << std::endl;
#endif
}

/* Relation operator */

Fixed &	Fixed::operator=(Fixed const & rhs)
{
#ifdef DEBUG_MSG
	std::cout << "Copy assignment operator called" << std::endl;
#endif
	this->_n = rhs._n;
	return (*this);
}

bool	Fixed::operator>(Fixed const & rhs) const
{
	if (this->_n > rhs._n)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	if (this->_n < rhs._n)
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	if (this->_n >= rhs._n)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	if (this->_n <= rhs._n)
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	if (this->_n == rhs._n)
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	if (this->_n != rhs._n)
		return (true);
	else
		return (false);
}

/* END Relation operators */

/* Binary operators */

Fixed	Fixed::operator+(Fixed const & rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const & rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const & rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const & rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

/* END Binary operators */

/* Unary operators */

Fixed	Fixed::operator++(void) // PRE FIX
{
	this->_n += 1;
	return(Fixed(*this));
}

Fixed	Fixed::operator--(void) // PRE FIX
{
	this->_n -= 1;
	return(Fixed(*this));
}

Fixed	Fixed::operator++(int) // POST FIX
{
	Fixed	oldFixed = Fixed(*this);

	this->_n += 1;
	return (oldFixed);
}

Fixed	Fixed::operator--(int) // POST FIX
{
	Fixed	oldFixed = Fixed(*this);

	this->_n -= 1;
	return (oldFixed);
}

/* END Unary operators */

int	Fixed::getRawBits(void)
{
#ifdef DEBUG_MSG
	std::cout << "getRawBits member function called" << std::endl;
#endif
	return (this->_n);
}

void	Fixed::setRawBits(int const raw)
{
#ifdef DEBUG_MSG
	std::cout << "setRawBits member function called" << std::endl;
#endif
	this->_n = raw;
}

void	Fixed::_showRawBits(int const n) const
{
	size_t	int_bits = sizeof(int) * 8;

	for (ssize_t i = int_bits - 1; i >= 0; i--)
	{
		if ((1 << i) & n)
			std::cout << "1";
		else
			std::cout << "0";
		if (i % 8 == 0 && i != 0)
			std::cout << " ";
	}
	std::cout << std::endl;
}

int	Fixed::toInt(void) const
{
	return (this->_n / (1 << this->_nbrBits));
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_n / (1 << this->_nbrBits));
}

Fixed &	Fixed::min(Fixed & lhs, Fixed & rhs)
{
	if (lhs <= rhs)
		return (lhs);
	else
		return (rhs);
}

Fixed const &	Fixed::min(Fixed const & lhs, Fixed const & rhs)
{
	if (lhs <= rhs)
		return (lhs);
	else
		return (rhs);
}

Fixed &	Fixed::max(Fixed & lhs, Fixed & rhs)
{
	if (lhs >= rhs)
		return (lhs);
	else
		return (rhs);
}

Fixed const &	Fixed::max(Fixed const & lhs, Fixed const & rhs)
{
	if (lhs >= rhs)
		return (lhs);
	else
		return (rhs);
}

std::ostream& operator<<(std::ostream& os, const Fixed& rhs)
{
	os << rhs.toFloat();
	return (os);
}
