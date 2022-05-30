/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */ /*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:39:23 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/27 18:00:30 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _n(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n) : _n(n << _nbrBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const f) : _n(roundf(f * (1 << _nbrBits)))
{
	std::cout << "Float constructor called" << std::endl;
	// _showRawBits(f * (1 << _nbrBits));
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_n = rhs._n;
	return *this;
}

int	Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_n);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
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
	//showRawBits(this->_n);
	//showRawBits(1 << this->_nbrBits);
	//showRawBits((this->_n / (1 << this->_nbrBits)));
	return ((float)this->_n / (1 << this->_nbrBits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& rhs)
{
	os << rhs.toFloat();
	return (os);
}
