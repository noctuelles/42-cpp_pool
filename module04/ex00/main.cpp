/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:33:40 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/02 23:31:21 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

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

	std::cout << std::endl;

	Bird->makeSound();
	delete Bird;

	std::cout << std::endl;

	Moulinette->makeSound();
	Norminet->makeSound();

	delete Moulinette;
	delete Norminet;

	std::cout << std::endl;

	theMoulinette->makeSound();
	theNorminet->makeSound();

	delete theMoulinette;
	delete theNorminet;
}
