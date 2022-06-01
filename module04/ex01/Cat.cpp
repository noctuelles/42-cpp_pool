/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:16:01 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/01 20:01:20 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : _brain(new Brain())
{
	std::cout << "Cat default constructor called." << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const & src)
{
	std::cout << "Cat copy constructor called." << std::endl;
	this->_brain = new Brain();
	for (size_t i = 0; i < Brain::nbrOfIdeas; i++)
		this->_brain->setIdea(i, src._brain->getIdea(i));
	this->_type = src._type;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
	delete this->_brain;
}

Cat &	Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat assignement overload called." << std::endl;
	this->_type = rhs._type;
	this->_brain = rhs._brain;
	return (*this);
}

void	Cat::makeSound(void)
{
	std::cout << "I'm a " << this->_type << " i usually Meeooow!" << std::endl;
}

Brain *	Cat::getBrain()
{
	return (this->_brain);
}
