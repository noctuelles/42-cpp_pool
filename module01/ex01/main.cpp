/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:44:19 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/26 13:53:01 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	size_t const	nbrZombie = 5;

	Zombie	*aZombieHorde = zombieHorde(nbrZombie, "Zombieland horde");
	for (size_t i = 0; i < nbrZombie; i++)
		aZombieHorde[i].announce();
	delete [] aZombieHorde;
}
