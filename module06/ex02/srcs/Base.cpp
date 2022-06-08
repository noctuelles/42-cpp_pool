/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:38:35 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/08 13:10:50 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <exception>
#include <iostream>
#include <cstdlib>

Base::~Base(void) {}

Base *	Base::generate(void)
{
	int	rnd = rand() % 3;

	switch(rnd)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
	}
	return (NULL);
}

void	Base::identify(Base *p)
{
	std::cout << "As pointer: ";
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	Base::identify(Base &p)
{
	std::cout << "As reference: ";
	try
	{
		(void) dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception & e) {}
	try
	{
		(void) dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::exception & e) {}
	try
	{
		(void) dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::exception & e) {}
}
