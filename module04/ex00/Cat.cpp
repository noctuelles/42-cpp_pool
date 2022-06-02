/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:16:01 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/02 23:27:34 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called." << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat const & src) : Animal()
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}

Cat &	Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat assignement overload called." << std::endl;
	this->type = rhs.type;
	return (*this);
}

void	Cat::makeSound(void)
{
	std::cout << "I'm a " << this->type << " i usually Meeooow!" << std::endl;
}
