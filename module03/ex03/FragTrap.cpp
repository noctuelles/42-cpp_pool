/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:53:09 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/31 18:08:18 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap default constructor called." << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = FragTrap::defaultAttackDamage;
	return ;
}

FragTrap::FragTrap(std::string const & target) : ClapTrap(target)
{
	std::cout << "FragTrap name constructor called : \"" << target << "\"." << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = FragTrap::defaultAttackDamage;
	return ;
} 

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called : \"" << this->_name << "\"." << std::endl;
}

FragTrap &	FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap \"" << this->_name << "\" says : hey guys ! Wanna high fives ?!" << std::endl;
}
