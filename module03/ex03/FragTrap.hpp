/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:50:24 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/31 17:00:44 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_H
# define FRAGTRAP_CLASS_H

#include "ClapTrap.hpp"
#include <string>

class	FragTrap : virtual public ClapTrap
{
	public:

		FragTrap(void);
		FragTrap(std::string const & name);
		~FragTrap(void);

		FragTrap &	operator=(FragTrap const & rhs);

		void	highFivesGuys(void);

		static unsigned int const	defaultAttackDamage = 30;
};

#endif
