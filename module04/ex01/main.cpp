/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:33:40 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/01 20:01:24 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <algorithm>
#include <functional>
#include <iostream>

# define NUMBER_ANIMALS 2

int	main(void)
{
	Animal	*theAnimals[NUMBER_ANIMALS];

	std::cout << "\t* Init dogs and cats *" << std::endl << std::endl;

	for (size_t i = 0; i < NUMBER_ANIMALS / 2; i++)
		theAnimals[i] = new Dog();
	for (size_t i = NUMBER_ANIMALS / 2; i < NUMBER_ANIMALS; i++)
		theAnimals[i] = new Cat();

	std::cout << std::endl;
	std::cout << "\t* Deleting dogs and cats *" << std::endl << std::endl;

	for (size_t i = 0; i < NUMBER_ANIMALS / 2; i++)
		delete theAnimals[i];
	for (size_t i = NUMBER_ANIMALS / 2; i < NUMBER_ANIMALS; i++)
		delete theAnimals[i];

	std::cout << std::endl;

	Cat	*Norminet = new Cat();
	Cat	*aLessCuteCat;
	Cat	*aPerfectCopyOfNorminet;

	Norminet->getBrain()->setIdea(0, "Being so cute so students adore me.");
	Norminet->getBrain()->setIdea(1, "Being such a god that petting me give a T.I.G to student.");

	Norminet->makeSound();
	std::cout << std::endl;

	std::cout << "Norminet first idea : " << Norminet->getBrain()->getIdea(0) << std::endl;
	std::cout << "Norminet second idea : " << Norminet->getBrain()->getIdea(1) << std::endl;
	std::cout << "Norminet first idea address : " << &Norminet->getBrain()->getIdea(0) << std::endl;

	std::cout << std::endl;
	std::cout << "* The less cute cat somehow performed a deep copy of norminet ! *" << std::endl;
	std::cout << std::endl;
	aLessCuteCat = new Cat(*Norminet);

	std::cout << "The less cute cat first idea : " << aLessCuteCat->getBrain()->getIdea(0) << std::endl;
	std::cout << "The less cute cat second idea : " << aLessCuteCat->getBrain()->getIdea(1) << std::endl;
	std::cout << "The less cute cat first idea address : " << &aLessCuteCat->getBrain()->getIdea(0) << std::endl;

	std::cout << std::endl;

	std::cout << "A norminet clone appeared !" << std::endl;
	aPerfectCopyOfNorminet = Norminet;
	std::cout << std::endl;

	std::cout << "Norminet clone first idea : " << aPerfectCopyOfNorminet->getBrain()->getIdea(0) << std::endl;
	std::cout << "Norminet clone first idea address : " << &aPerfectCopyOfNorminet->getBrain()->getIdea(0) << std::endl;
	std::cout << std::endl;

	delete Norminet;
	delete aLessCuteCat;
}
