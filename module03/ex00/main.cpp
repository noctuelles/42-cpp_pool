/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:38:55 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/31 14:57:35 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	bob = ClapTrap("Bob");
	ClapTrap	sindy = ClapTrap("Sindy");

	for (int i = 0; i < 10; i++)
		bob.attack("Sindy");
	bob.attack("Sindy");
	for (int i = 0; i < 10; i++)
		sindy.attack("Bob");
	sindy.beRepaired(10);
	sindy.takeDamage(9);
	sindy.takeDamage(9);
	sindy.attack("Bob");
}
