/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:21:07 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/31 15:41:28 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) : _name("Default"), _hitPoints(10), _energyPoints(10),
							_attackDamage(defaultAttackDamage)
{
	std::cout << "ClapTrap default constructor called." << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string const & target) : _name(target), _hitPoints(10),
										_energyPoints(10), _attackDamage(defaultAttackDamage)
{
	std::cout << "ClapTrap name constructor called : \"" << target << "\"." << std::endl;
	return ;
} 

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called : \"" << this->_name << "\"." << std::endl;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "ClapTrap copy constructor called." << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

void	ClapTrap::attack(std::string const & target)
{
	if (this->_hitPoints > 0)
	{
		if (this->_energyPoints > 0)
		{
			this->_energyPoints--;
			std::cout << "ClapTrap \"" << this->_name << "\" attacks \"" << target << "\", causing " << this->_attackDamage << " points of damage !" << std::endl;
		}
		else
			std::cout << "ClapTrap \"" << this->_name << "\" can't attack, he / she doesn't have any energy points left." << std::endl;
	}
	else
		std::cout << "ClapTrap \"" << this->_name << "\" can't attack \"" << target << "\", he / she's dead." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		if ((int)(this->_hitPoints - amount) <= 0)
		{
			std::cout << "ClapTrap \"" << this->_name << "\" tooks " << this->_hitPoints << " point(s) of damage and died of his / her wounds." << std::endl;
			this->_hitPoints = 0;
		}
		else
		{
			this->_hitPoints -= amount;
			std::cout << "ClapTrap \"" << this->_name << "\" tooks " << amount << " point(s) of damage." << std::endl;
		}
	}
	else
		std::cout << "ClapTrap \"" << this->_name << "\" can't take damage, he / she's dead." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		if (this->_energyPoints > 0)
		{
			this->_energyPoints--;
			std::cout << "ClapTrap \"" << this->_name << "\" repairing for " << amount << "." << std::endl;
		}
		else
			std::cout << "ClapTrap \"" << this->_name << "\" can't be repair, he / she doesn't have any energy points left." << std::endl;
	}
	else
		std::cout << "ClapTrap \"" << this->_name << "\" can't be repair, he / she's dead." << std::endl;
}
