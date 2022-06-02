/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:24:31 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/02 23:20:29 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>
#include <string>
#include "Colors.hpp"

Character::Character() : _name("DefaultCharacterName"), _inventory()
{
	std::cout << "Character default constructor called." << std::endl;
}

Character::Character(Character const & src)
{
	std::cout << "Character copy constructor called." << std::endl;
	*this = src;
}

Character::Character(std::string const & name) : _name(name), _inventory() 
{
	std::cout << "Character name constructor called." << std::endl;
}

Character::~Character()
{
	std::cout << "Character destructor called." << std::endl;
	this->_deleteInventory();
}

Character &	Character::operator=(Character const & rhs)
{
	std::cout << "Character assignement overload called." << std::endl;
	this->_deleteInventory();
	for (size_t i = 0; i < 4; i++)
		this->_inventory[i] = rhs._inventory[i]->clone();
	this->_name = rhs._name;
	return (*this);
}

void	Character::equip(AMateria *m)
{
	size_t	i;

	if (!m)
		return ;
	if (!m->isEquipped())
	{
		for (i = 0; i < 4 && this->_inventory[i] != NULL; i++)
			;
		if (i == 4) // Every inventory slot are full, can't equip.
		{
			std::cout << colors::red << "Can't equip" << colors::reset << " Materia " << m->getType() << " on Character \""
						<< this->_name << "\": inventory is full." << std::endl;
			return ;
		}
		else
		{
			std::cout << "Materia " << colors::yellow << m->getType() << " equiped" << colors::reset << " on Character \""
				<< this->_name << "\" at index " << i << "." << std::endl;
			m->setOwner(this->_name);
			this->_inventory[i] = m;
		}
	}
	else
		std::cout << colors::red << "Can't equip" << colors::reset << " Materia " << m->getType() << " on Character \""
					<< this->_name << "\" : Materia object already used on character \"" << m->getOwner() << "\"." << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->_inventory[idx] == NULL)
	{
		std::cout << colors::red << "Can't unequip" << colors::reset << " \"" << this->_name << "\" Materia at index " << idx << " : empty slot." << std::endl;
		return ;
	}
	std::cout << colors::yellow << "Unequiped" << colors::reset << " Materia " << this->_inventory[idx]->getType() << " on Character \""
		<< this->_name << "\" at index " << idx << "." << std::endl;
	this->_inventory[idx]->freeMateria();
	this->_inventory[idx] = NULL;
}

std::string const & Character::getName(void) const
{
	return (this->_name);
}

void	Character::use(int idx, ICharacter & target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
	else
		std::cout << colors::red << "No Materia" << colors::reset << " at index " << idx << " on Character \"" << this->_name << "\"." << std::endl;
}

void	Character::_deleteInventory(void)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete (this->_inventory[i]);
	}
}
