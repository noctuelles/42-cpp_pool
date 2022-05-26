/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:42:04 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/26 15:24:22 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H

#include <string>

class Weapon
{

	public:

		Weapon(std::string const type);
		~Weapon(void);
		std::string const &	getType(void) const;
		void				setType(std::string const type);

	private:

		std::string	_type;

};

#endif
