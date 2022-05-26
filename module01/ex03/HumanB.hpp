/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:48:45 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/26 15:24:15 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_H
# define HUMANB_CLASS_H

#include "Weapon.hpp"
#include <string>

class	HumanB
{

	public:

		HumanB(std::string const name);
		~HumanB(void);
		void	attack(void) const;
		void	setWeapon(Weapon * weapon);

	private:

		Weapon *	_weapon;
		std::string	_name;

};

#endif
