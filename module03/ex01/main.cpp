/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:38:55 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/31 15:40:54 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	bob = ScavTrap("Bob");
	ScavTrap	sindy = ScavTrap("Sindy");

	for (int i = 0; i < 5; i++)
	{
		bob.attack("Sindy");
		sindy.takeDamage(ScavTrap::defaultAttackDamage);
		if (i == 3)
		{
			sindy.attack("Bob");
			bob.takeDamage(ScavTrap::defaultAttackDamage);
		}
	}
	sindy.beRepaired(20);
	bob.beRepaired(10);
}
