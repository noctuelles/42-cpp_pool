/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <plouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:21:54 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/25 17:51:36 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>
#include <iostream>

Contact::Contact(void) {
	return ;
}

Contact::Contact(std::string const first_name,
			std::string const last_name,
			std::string const nick_name,
			std::string const phone_number,
			std::string const darkset_secret) : _first_name(first_name),
												_last_name(last_name),
												_nick_name(nick_name),
												_phone_number(phone_number),
												_darkest_secret(darkset_secret) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

/* Accesors */

std::string const	Contact::getFirstName(void) const {
	return (this->_first_name);
}

std::string const	Contact::getLastName(void) const {
	return (this->_last_name);
}

std::string const	Contact::getNickName(void) const {
	return (this->_nick_name);
}

std::string const	Contact::getPhoneNumber(void) const {
	return (this->_phone_number);
}

std::string const	Contact::getDarkestSecret(void) const {
	return (this->_darkest_secret);
}

void	Contact::setFirstName(std::string const first_name) {
	this->_first_name = first_name;
}

void	Contact::setLastName(std::string const last_name) {
	this->_last_name = last_name;
}

void	Contact::setNickName(std::string const nick_name) {
	this->_nick_name = nick_name;
}

void	Contact::setPhoneNumber(std::string const phone_number) {
	this->_phone_number = phone_number;
}

void	Contact::setDarkestSecret(std::string const darkest_secret) {
	this->_darkest_secret = darkest_secret;
}

void	Contact::showContactInfo(void) {
	std::cout << "First name     : " << this->getFirstName() << "." << std::endl;
	std::cout << "Last name      : " << this->getLastName() << "." << std::endl;
	std::cout << "Nick name      : " << this->getNickName() << "." << std::endl;
	std::cout << "Phone number   : " << this->getPhoneNumber() << "." << std::endl;
	std::cout << "Darkest secret : " << this->getDarkestSecret() << "." << std::endl;
}
