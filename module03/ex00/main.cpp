/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:38:55 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/31 15:30:50 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	bob = ClapTrap("Bob");
	ClapTrap	sindy = ClapTrap("Sindy");

	for (int i = 0; i < 10; i++)
	{
		bob.attack("Sindy");
		sindy.takeDamage(ClapTrap::defaultAttackDamage);
	}
	bob.attack("Sindy");
	for (int i = 0; i < 10; i++)
	{
		sindy.attack("Bob");
		bob.takeDamage(ClapTrap::defaultAttackDamage);
	}
	sindy.beRepaired(10);
	sindy.takeDamage(9);
	sindy.takeDamage(9);
	sindy.attack("Bob");
}
