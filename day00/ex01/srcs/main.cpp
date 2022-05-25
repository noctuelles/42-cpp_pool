/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:18:01 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/25 17:49:06 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	thePhoneBook;
	std::string	cmd;

	std::cout << "My Digital Book v0.1 - (c) EzPhone 1988" << std::endl << std::endl;
	while (true)
	{
		std::cout << "> ";
		if (!std::getline(std::cin, cmd) || std::cin.eof())
		{
			std::cout << std::endl;
			break ;
		}
		cmd = thePhoneBook.trim(cmd);
		if (cmd == "ADD")
		{
			if (thePhoneBook.addContact() == false)
				break ;
		}
		else if (cmd == "SEARCH")
		{
			thePhoneBook.printContactTab();
			if (thePhoneBook.askIndexContact() == false)
				break ;
		}
		else if (cmd == "EXIT")
		{
			std::cout << "Goodbye !" << std::endl;
			break ;
		}
	}

	return (0);
}
