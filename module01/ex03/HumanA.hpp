/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:48:45 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/26 15:24:20 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_H
# define HUMANA_CLASS_H

#include "Weapon.hpp"
#include <string>

class	HumanA
{

	public:

		HumanA(std::string const name, Weapon const &weapon);
		~HumanA(void);
		void	attack(void) const;

	private:

		Weapon const &	_weapon;
		std::string		_name;

};

#endif
