/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:08:49 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/01 20:01:11 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>

Brain::Brain()
{
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain copy constructor called." << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}

Brain &	Brain::operator=(Brain const & rhs)
{
	std::cout << "Brain assignement overload called." << std::endl;
	for (size_t i = 0; i < this->nbrOfIdeas; i++)
		this->_ideas[i] = rhs._ideas[i];
	return (*this);
}

std::string const &	Brain::getIdea(size_t i) const
{
	if (i > this->nbrOfIdeas - 1)
		return (this->_ideas[0]);
	return (this->_ideas[i]);
}

void	Brain::setIdea(size_t i, std::string const & idea)
{
	if (i > this->nbrOfIdeas - 1)
		return ;
	this->_ideas[i] = idea;
}
