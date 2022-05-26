/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:09:09 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/26 20:22:29 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon	longSword  = Weapon("long sword");
	Weapon	shortSword = Weapon("short sword");
	Weapon	bareHands  = Weapon("");

	HumanA	jimmy      = HumanA("Jimmy", longSword);
	HumanB	bobby      = HumanB("Bobby");

	jimmy.attack();
	bobby.attack();
	bobby.setWeapon(shortSword);
	jimmy.attack();

	bobby.attack();
	shortSword.setType("");
	bobby.attack();
	bobby.setWeapon(longSword);
	bobby.attack();

	return (0);
}
