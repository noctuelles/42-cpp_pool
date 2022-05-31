/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:56:47 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/31 17:45:17 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CLASS_H
# define DIAMONDTRAP_CLASS_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class	DiamondTrap : public ScavTrap, public FragTrap
{

	public:

		DiamondTrap(void);
		DiamondTrap(std::string const & name);
		~DiamondTrap(void);

		DiamondTrap &	operator=(DiamondTrap const & rhs);

		using ScavTrap::attack;

		void	whoAmI(void);

	private:

		std::string	_name;
};

#endif
