/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:38:55 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/31 17:44:01 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	Bobby = DiamondTrap("Bobby");
	DiamondTrap	Sindy = DiamondTrap("Sindy");
	Bobby.whoAmI();
	Sindy.whoAmI();

	Bobby.attack("Sindy");
	Sindy.takeDamage(FragTrap::defaultAttackDamage);
	Bobby.attack("Sindy");
	Sindy.takeDamage(FragTrap::defaultAttackDamage);
	Bobby.attack("Sindy");
	Sindy.takeDamage(FragTrap::defaultAttackDamage);
	Sindy.attack("Bobby");
	Bobby.takeDamage(FragTrap::defaultAttackDamage);
	Sindy.beRepaired(30);
	Bobby.attack("Sindy");
	Sindy.takeDamage(FragTrap::defaultAttackDamage);
}
