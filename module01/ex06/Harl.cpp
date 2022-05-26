/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:09:30 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/26 20:00:23 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::_debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "Mfff... would you mind knocking on the door next time ?" << std::endl << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "What did you say ? Adding extra bacon costs extra money ? No way." << std::endl << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "You better get out of the way ! I'm gonna find these bastard !" << std::endl << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "Hey you !! The hell's going on with the extra money ? Are you out of your freaking mind ?" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string		complains[4]  = {"DEBUG", "INFO", "WARNING", "ERROR"};
	size_t			complainIndex = 4;

	for (size_t i = 0; i < 4; i++)
	{
		if (complains[i] == level)
		{
			complainIndex = i;
			break ;
		}
	}
	switch (complainIndex)
	{
		case 0:
			this->_debug();
			complainIndex++;
		case 1:
			this->_info();
			complainIndex++;
		case 2:
			this->_warning();
			complainIndex++;
		case 3:
			this->_error();
			break ;
		default:
			std::cout << "[Probably complaining about insignificant problems]" << std::endl;
	}
}
