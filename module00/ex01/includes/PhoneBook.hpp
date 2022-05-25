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
	size_t			getNbrContact(void) const;
	bool			addContact(void);
	std::string		trim(std::string const &str);
	void			printContactInfo(size_t idx) const;
	void			printContactTab(void) const;
	bool			askIndexContact(void);

private:

	size_t				_idx;
	Contact				_list_contact[8];
	bool				_halt;

	std::string	_getInput(bool letters_digits, std::string const prompt);
	bool		_containsOnlyLetters(std::string const &str) const;
	bool		_containsOnlyDigits(std::string const &str) const;
	void		_printNameInfo(std::string str) const;
};

#endif
