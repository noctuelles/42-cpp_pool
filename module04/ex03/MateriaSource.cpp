/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:25:37 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/03 11:48:58 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() : _learnedMateria()
{
	std::cout << "MateriaSource default constructor called." << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & src) : _learnedMateria()
{
	std::cout << "MateriaSource copy constructor called." << std::endl;
	*this = src;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called." << std::endl;
	this->_deleteLearnedMaterial();
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & rhs)
{
	std::cout << "MateriaSource assignement overload called." << std::endl;
	this->_deleteLearnedMaterial();
	for (size_t i = 0; i < 4; i++)
	{
		if (rhs._learnedMateria[i] != NULL)
			this->_learnedMateria[i] = rhs._learnedMateria[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_learnedMateria[i] == NULL)
		{
			this->_learnedMateria[i] = materia;
			break ;
		}
	}
}

AMateria *	MateriaSource::createMateria(std::string const & type)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_learnedMateria[i] && this->_learnedMateria[i]->getType() == type)
			return(this->_learnedMateria[i]->clone());
	}
	return (NULL);
}

void	MateriaSource::_deleteLearnedMaterial(void)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_learnedMateria[i] != NULL)
		{
			delete (this->_learnedMateria[i]);
			for (size_t j = 0; j < 4; j++)
			{
				if (j == i)
					continue ;
				if (this->_learnedMateria[j] == this->_learnedMateria[i])
					this->_learnedMateria[j] = NULL;
			}
		}
	}
}
