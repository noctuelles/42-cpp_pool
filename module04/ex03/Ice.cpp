
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:28:25 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/02 10:28:25 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default constructor called." << std::endl;
}

Ice::Ice(Ice const & src)
{
	std::cout << "Ice copy constructor called." << std::endl;
	*this = src;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called." << std::endl;
}

Ice &	Ice::operator=(Ice const & rhs)
{
	std::cout << "Ice assignement overload called." << std::endl;
	this->_type = rhs._type;
	return (*this);
}

AMateria *	Ice::clone(void) const
{
	AMateria *	aClone = new Ice();
	return (aClone);
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
