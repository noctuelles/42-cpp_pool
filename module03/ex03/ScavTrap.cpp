/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:07:05 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/31 15:54:50 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) 
{
	std::cout << "ScavTrap default constructor called." << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = ScavTrap::defaultAttackDamage;
	return ;
}

ScavTrap::ScavTrap(std::string const & target) : ClapTrap(target)
{
	std::cout << "ScavTrap name constructor called : \"" << target << "\"." << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = ScavTrap::defaultAttackDamage;
	return ;
} 

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called : \"" << this->_name << "\"." << std::endl;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

void	ScavTrap::attack(std::string const & target)
{
	if (this->_hitPoints > 0)
	{
		if (this->_energyPoints > 0)
		{
			this->_energyPoints--;
			std::cout << "ScavTrap \"" << this->_name << "\" attacks \"" << target << "\", causing " << this->_attackDamage << " points of damage !" << std::endl;
		}
		else
			std::cout << "ScavTrap \"" << this->_name << "\" can't attack, he / she doesn't have any energy points left." << std::endl;
	}
	else
		std::cout << "ScavTrap \"" << this->_name << "\" can't attack \"" << target << "\", he / she's dead." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap \"" << this->_name << "\" is entering in Gate Keeper mode." << std::endl;
}
