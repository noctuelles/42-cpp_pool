/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <plouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:57:35 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/25 17:51:55 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cctype>
#include <ostream>
#include <string>
#include <iostream>
#include <iomanip>
#include <istream>

PhoneBook::PhoneBook(void) : _idx(0), _halt(false) {
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

size_t	PhoneBook::getNbrContact(void) const
{
	return(this->_idx);
}

void	PhoneBook::printContactInfo(size_t idx) const
{
	if (idx >= 0 && idx <= 7)
		this->_list_contact[idx].showContactInfo();
}

bool	PhoneBook::_containsOnlyLetters(std::string const &str) const
{
	return (str.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ '") == std::string::npos);
}

bool	PhoneBook::_containsOnlyDigits(std::string const &str) const
{
	return (str.find_first_not_of("0123456789 ") == std::string::npos);
}

std::string	PhoneBook::trim(std::string const &str)
{
	std::string const white_space = " \t\v\r\n";

	std::size_t start = str.find_first_not_of(white_space);
	std::size_t end = str.find_last_not_of(white_space);
	return start == end ? str : str.substr(start, end - start + 1);
}

std::string	PhoneBook::_getInput(bool letters_digits, std::string const prompt)
{
	bool		(PhoneBook::*check_fnct)(std::string const &) const;
	std::string	type;
	std::string	str;

	if (letters_digits)
	{
		type = "letters";
		check_fnct = &PhoneBook::_containsOnlyLetters;
	}
	else
	{
		type = "digits";
		check_fnct = &PhoneBook::_containsOnlyDigits;
	}
	while (true)
	{
		std::cout << prompt;
		if (!std::getline(std::cin, str) || std::cin.eof())
		{
			this->_halt = true;
			return (std::string());
		}
		str = trim(str);
		if (!str.empty())
		{
			if ((this->*check_fnct)(str) == true)
				break ;
			else
				std::cout << "Input error: only " << type << " are allowed." << std::endl;
		}
		else
			std::cout << "Input error: empty input." << std::endl;
	}
	return (str);
}

bool PhoneBook::addContact(void) {
	std::string	first_name, last_name, nick_name, phone_number, darkest_secret;

	std::cout << std::endl << "-- Adding a contact --" << std::endl << std::endl;

	if (this->_idx == 8)
		this->_idx -= 1;
	this->_list_contact[this->_idx].setFirstName(_getInput(true, "First name     : "));
	if (this->_halt)
		return (false);
	this->_list_contact[this->_idx].setLastName(_getInput(true, "Last name      : "));
	if (this->_halt)
		return (false);
	this->_list_contact[this->_idx].setNickName(_getInput(true, "Nick name      : "));
	if (this->_halt)
		return (false);
	this->_list_contact[this->_idx].setPhoneNumber(_getInput(false, "Phone Number   : "));
	if (this->_halt)
		return (false);
	this->_list_contact[this->_idx].setDarkestSecret(_getInput(true, "Darkest secret : "));
	if (this->_halt)
		return (false);
	if (this->_idx < 8)
		this->_idx += 1;
	std::cout << std::endl << "Contact sucessfully added !" << std::endl << std::endl;
	return (true);
}

void	PhoneBook::printContactTab(void) const
{
	std::cout << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|   Index  |First name| Last name| Nick name|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (size_t i = 0; i < this->_idx; i++)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		_printNameInfo(this->_list_contact[i].getFirstName());
		_printNameInfo(this->_list_contact[i].getLastName());
		_printNameInfo(this->_list_contact[i].getNickName());
		std::cout << std::endl;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl << std::endl;
}

bool	PhoneBook::askIndexContact(void)
{
	std::string	input;
	size_t		idx;

	while (true)
	{
		std::cout << "Enter an index (0-7): ";
		if (!std::getline(std::cin, input) || std::cin.eof())
			return (false);
		input = trim(input);
		if (input.length() == 1)
		{
			if (std::isdigit(input[0]))
			{
				idx = input[0] - '0';
				if (idx <= 7)
				{
					if (idx >= this->_idx)
						std::cout << "Invalid input: no record in index " << idx << "." << std::endl;
					else
						break ;
				}
				else
					std::cout << "Invalid input: must be a digit between (0-7)." << std::endl;
			}
			else
				std::cout << "Invalid input: must be a digit between (0-7)." << std::endl;
		}
		else
			std::cout << "Invalid input: must be a single character." << std::endl;
	}
	std::cout << std::endl;
	this->_list_contact[idx].showContactInfo();
	std::cout << std::endl;
	return (true);
}

void	PhoneBook::_printNameInfo(std::string name) const
{
	if (name.length() > 10)
	{
		name[9] = '.';
		name.resize(10);
	}
	std::cout << std::setw(10) << name << "|";
}
