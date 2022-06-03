/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:24:31 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/03 11:49:06 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_H
# define CHARACTER_CLASS_H

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class	Character : public ICharacter
{

	public:

		Character(void);
		Character(std::string const & name);
		Character(Character const & src);
		~Character(void);

		Character &	operator=(Character const & rhs);

		void				equip(AMateria *m);
		void				unequip(int idx);
		std::string const &	getName(void) const;
		void				use(int idx, ICharacter& target);

	private:

		std::string	_name;
		AMateria *	_inventory[4];

		void	_deleteInventory(void);
};

#endif // CHARACTER_CLASS_H
