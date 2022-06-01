/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:10:04 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/01 20:01:22 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : _brain(new Brain())
{
	 std::cout << "Dog default constructor called." << std::endl;
	 this->_type = "Dog";
}

Dog::Dog(Dog const & src)
{
	std::cout << "Dog copy constructor called." << std::endl;
	this->_brain = new Brain();
	for (size_t i = 0; i < Brain::nbrOfIdeas; i++)
		this->_brain->setIdea(i, src._brain->getIdea(i));
	this->_type = src._type;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
	delete this->_brain;
}

Dog &	Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog assignement overload called." << std::endl;
	this->_type = rhs._type;
	this->_brain = rhs._brain;
	return (*this);
}

void	Dog::makeSound(void)
{
	std::cout << "I'm a " << this->_type << " i usually Wouaf!" << std::endl;
}
