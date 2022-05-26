/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:48:41 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/26 20:22:48 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string const name) : _weapon(NULL), _name(name)
{
	std::cout << this->_name << " join the battlefield." << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << this->_name << " is fleeing the battlefield." << std::endl;
}

void	HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with their ";
	if (this->_weapon == NULL || this->_weapon->getType() == "")
		std::cout << "bare hands !";
	else
		std::cout << this->_weapon->getType() << "."; 
	std::cout << std::endl;
}

void	HumanB::setWeapon(Weapon & weapon)
{
	std::cout << this->_name << " switched to ";
	if (weapon.getType() == "")
		std::cout << "bare hands ! This guy ain't joking around !";
	else
		std::cout << weapon.getType() << ".";
	std::cout << std::endl;
	this->_weapon = &weapon;
}
