/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:40:21 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/26 13:52:31 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*theZombieHorde = new Zombie[N];
	for (size_t i = 0; i < (size_t) N; i++)
		theZombieHorde[i].setZombieName(name);
	return (theZombieHorde);
}
