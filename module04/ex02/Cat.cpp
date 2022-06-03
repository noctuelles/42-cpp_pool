/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:16:01 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/03 11:33:00 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : AAnimal(), _brain(new Brain())
{
	std::cout << "Cat default constructor called." << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const & src) : AAnimal(), _brain(NULL)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
	delete this->_brain;
}

Cat &	Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat assignement overload called." << std::endl;
	if (this->_brain)
		delete (this->_brain);
	this->_brain = new Brain();
	for (size_t i = 0; i < Brain::nbrOfIdeas; i++)
		this->_brain->setIdea(i, rhs._brain->getIdea(i));
	this->_type = rhs._type;
	return (*this);
}

void	Cat::makeSound(void)
{
	std::cout << "I'm a " << this->_type << " i usually Meeooow!" << std::endl;
}

Brain *	Cat::getBrain() const
{
	return (this->_brain);
}
