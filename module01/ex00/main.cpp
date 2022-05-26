/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:01:27 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/26 13:37:56 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

int	main(void)
{
	Zombie	*aZombie       = newZombie("Bob");
	Zombie	*anotherZombie = newZombie("Bobby");

	randomChump("John Doe");

	aZombie->announce();
	anotherZombie->announce();

	delete aZombie;
	delete anotherZombie;

	return (0);
}
