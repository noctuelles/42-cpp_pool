/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:03:34 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/31 15:40:59 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_H
# define SCAVTRAP_CLASS_H

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:

		ScavTrap(void);
		ScavTrap(std::string const & name);
		~ScavTrap(void);

		ScavTrap &	operator=(ScavTrap const & rhs);

		void	attack(std::string const & target);

		static unsigned int const	defaultAttackDamage = 20;
};

#endif
