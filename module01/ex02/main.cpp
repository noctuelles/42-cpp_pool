/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:55:10 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/26 14:39:27 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	name       = "HI THIS IS BRAIN";
	std::string	*stringPTR = &name;
	std::string	&stringREF = name;

	std::cout << "memory address of name           : " << &name << std::endl;
	std::cout << "memory address held by stringPTR : " << stringPTR << std::endl;
	std::cout << "memory address held by stringREF : " << &stringREF << std::endl << std::endl;

	std::cout << "value of name                    : " << name << std::endl;
	std::cout << "value pointed to by stringPTR    : " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF    : " << stringREF << std::endl;
}
