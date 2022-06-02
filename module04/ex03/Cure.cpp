/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:18:51 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/02 23:22:15 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor called." << std::endl;
}

Cure::Cure(Cure const & src) : AMateria("cure")
{
	std::cout << "Cure copy constructor called." << std::endl;
	*this = src;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called." << std::endl;
}

Cure &	Cure::operator=(Cure const & rhs)
{
	std::cout << "Cure assignement overload called." << std::endl;
	this->_type = rhs._type;
	return (*this);
}

AMateria *	Cure::clone(void) const
{
	AMateria *	aClone = new Cure();
	return (aClone);
}

void	Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
