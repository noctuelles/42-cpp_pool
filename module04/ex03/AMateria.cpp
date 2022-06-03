/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:10:55 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/03 11:54:50 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria() : _type("Unknown"), _isEquipped(false), _owner(std::string(""))
{
	std::cout << "AMateria default constructor called." << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type), _isEquipped(false), _owner(std::string(""))
{
	std::cout << "AMateria type constructor called." << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
	std::cout << "AMateria copy constructor called." << std::endl;
	*this = src;
}

AMateria &	AMateria::operator=(AMateria const & rhs)
{
	std::cout << "AMateria assignement overload called." << std::endl;
	this->_type = rhs._type;
	return (*this);
}

std::string const &	AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter & target)
{
	std::cout << "Unknown AMateria tries to be using against " << target.getName() << "." << std::endl;
}

void	AMateria::setOwner(std::string const & owner)
{
	this->_isEquipped = true;
	this->_owner = owner;
}

void	AMateria::freeMateria(void)
{
	this->_isEquipped = false;
	this->_owner = std::string("");
}

bool	AMateria::isEquipped(void) const
{
	return (this->_isEquipped);
}

std::string const &	AMateria::getOwner(void) const
{
	return (this->_owner);
}
