/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:33:40 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/01 17:33:44 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Dog	*Moulinette = new Dog();
	Cat	*Norminet = new Cat();
	Animal	*Bird = new Animal();
	Animal	*theMoulinette = new Dog();

#ifdef WRONG_ANIMAL_TEST
	WrongAnimal	*theNorminet = new WrongCat();
#else
	Animal	*theNorminet = new Cat();
#endif

	Bird->makeSound();
	delete Bird;

	Moulinette->makeSound();
	Norminet->makeSound();

	delete Moulinette;
	delete Norminet;

	theMoulinette->makeSound();
	theNorminet->makeSound();

	delete theMoulinette;
	delete theNorminet;
}
