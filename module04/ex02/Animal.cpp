/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:08:44 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/01 19:10:11 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

Animal &	Animal::operator=(Animal const & rhs)
{
	std::cout << "Animal assignement overload called." << std::endl;
	this->_type = rhs._type;
	return (*this);
}

void	Animal::makeSound(void)
{
	std::cout << "Default animal sound." << std::endl;
}
