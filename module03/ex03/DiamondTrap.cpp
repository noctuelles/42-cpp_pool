/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:57:47 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/01 14:04:11 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void) 
{
	std::cout << "DiamondTrap default constructor called." << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string const & target) :	ClapTrap(target + "_clap_name"),
														ScavTrap(target + "_clap_name"),
														FragTrap(target + "_clap_name"),
														_name(target)
{
	std::cout << "DiamondTrap name constructor called : \"" << target << "\"." << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
} 

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	std::cout << "DiamondTrap copy constructor called." << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called : \"" << this->_name << "\"." << std::endl;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & rhs)
{
	std::cout << "DiamondTrap assignement overload called." << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Hello i'm DiamondTrap \"" << this->_name << "\" and the name of my grandfather is \"" << ClapTrap::_name << "\"." << std::endl;
}
