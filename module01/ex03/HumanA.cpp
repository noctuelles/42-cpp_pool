/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:48:41 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/26 20:15:23 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string const name, Weapon const &weapon) : 	_weapon(weapon),
																_name(name)
{
	std::cout << this->_name << " join the battlefield." << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << this->_name << " is fleeing the battlefield." << std::endl;
}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with their ";
	if (this->_weapon.getType() == "")
		std::cout << "bare hands !";
	else
		std::cout << this->_weapon.getType() << "."; 
	std::cout << std::endl;
}
