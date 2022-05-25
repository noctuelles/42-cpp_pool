/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <plouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:17:48 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/25 13:13:05 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iterator>
#include <string>

class	Contact {

public:

	Contact(void);
	Contact(std::string const first_name,
			std::string const last_name,
			std::string const nick_name,
			std::string const phone_number,
			std::string const darkset_secret);
	~Contact(void);

	std::string const	getFirstName(void) const;
	std::string const	getLastName(void) const;
	std::string const	getNickName(void) const;
	std::string const	getPhoneNumber(void) const;
	std::string const	getDarkestSecret(void) const;

	void				setFirstName(std::string const first_name);
	void				setLastName(std::string const first_name);
	void				setNickName(std::string const first_name);
	void				setPhoneNumber(std::string const first_name);
	void				setDarkestSecret(std::string const first_name);

	void				showContactInfo(void);

private:

	std::string	_first_name;
	std::string	_last_name;
	std::string	_nick_name;
	std::string	_phone_number;
	std::string	_darkest_secret;

};

#endif
