/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:10:04 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/03 11:33:01 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : AAnimal(), _brain(new Brain())
{
	 std::cout << "Dog default constructor called." << std::endl;
	 this->_type = "Dog";
}

Dog::Dog(Dog const & src) : AAnimal(), _brain(NULL)
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
	delete (this->_brain);
}

Dog &	Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog assignement overload called." << std::endl;
	if (this->_brain)
		delete (this->_brain);
	this->_brain = new Brain();
	for (size_t i = 0; i < Brain::nbrOfIdeas; i++)
		this->_brain->setIdea(i, rhs._brain->getIdea(i));
	this->_type = rhs._type;
	return (*this);
}

void	Dog::makeSound(void)
{
	std::cout << "I'm a " << this->_type << " i usually Wouaf!" << std::endl;
}
