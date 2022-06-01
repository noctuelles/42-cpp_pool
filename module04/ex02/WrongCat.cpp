/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:16:01 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/01 17:32:27 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called." << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & src)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat &	WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "WrongCat assignement overload called." << std::endl;
	this->type = rhs.type;
	return (*this);
}

void	WrongCat::makeSound(void)
{
	std::cout << "I'm a " << this->type << " i usually Meeooow!" << std::endl;
}
