/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:38:55 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/31 16:00:22 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	bob = FragTrap("Bob");
	FragTrap	sindy = FragTrap("Sindy");
	FragTrap	jonny = FragTrap("Jonny");
	FragTrap	holly = FragTrap("Holly");

	sindy.highFivesGuys();
	for (int i = 0; i < 5; i++)
	{
		bob.attack("Sindy");
		sindy.takeDamage(FragTrap::defaultAttackDamage);
		if (i == 3)
		{
			sindy.attack("Bob");
			bob.takeDamage(FragTrap::defaultAttackDamage);
		}
	}
	sindy.beRepaired(20);
	bob.beRepaired(10);
	bob.highFivesGuys();
}
