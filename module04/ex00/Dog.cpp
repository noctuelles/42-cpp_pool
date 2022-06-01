/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:10:04 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/01 15:33:32 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	 std::cout << "Dog default constructor called." << std::endl;
	 this->type = "Dog";
}

Dog::Dog(Dog const & src)
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
}

Dog &	Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog assignement overload called." << std::endl;
	this->type = rhs.type;
	return (*this);
}

void	Dog::makeSound(void)
{
	std::cout << "I'm a " << this->type << " i usually Wouaf!" << std::endl;
}
