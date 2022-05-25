/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <plouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:50:23 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/25 17:28:29 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.hpp"

class	PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);
	bool		addContact(void);
	void		printContactInfo(size_t idx);
	std::string	trim(std::string const &str);
	void		printContactTab(void);
	bool		askIndexContact(void);

private:

	size_t				_idx;
	Contact				_list_contact[8];
	bool				_halt;

	std::string	getInput(bool letters_digits, std::string const prompt);
	bool		containsOnlyLetters(std::string const &str);
	bool		containsOnlyDigits(std::string const &str);
	void		printNameInfo(std::string str);
};

#endif
