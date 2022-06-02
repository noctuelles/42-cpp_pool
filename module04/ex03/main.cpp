/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:03:47 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/02 19:03:25 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

int main(void)
{
	std::cout << "* Creating Characters *" << std::endl << std::endl;
	ICharacter	*bob = new Character("Bob");
	Character	*sindy = new Character("Sindy");

	std::cout <<  std::endl << "* Creating Materia Source *" << std::endl << std::endl;
	MateriaSource	*materiaSource = new MateriaSource();

	materiaSource->learnMateria(new Cure());
	materiaSource->learnMateria(new Ice());

	std::cout << std::endl;

	IMateriaSource	*anotherMateriaSource = new MateriaSource(*materiaSource);

	delete anotherMateriaSource;

	std::cout <<  std::endl << "* Our Characters equip themselve *" << std::endl << std::endl;

	AMateria *	tmp = NULL;

	tmp = materiaSource->createMateria("ice");
	bob->equip(tmp);
	tmp = materiaSource->createMateria("cure");
	bob->equip(tmp);
	bob->unequip(1);			// Unequip should NOT delete the materia
	delete tmp;					// Deleting it afterwards
	bob->equip(materiaSource->createMateria("not_a_materia")); // Not a valid materia type
	bob->equip(NULL);			// Equipping a NULL pointer
	bob->unequip(-2);			// Invalid index
	bob->unequip(213478923);	// Invalid index
	bob->unequip(1);			// Unequip an empty slot

	std::cout <<  std::endl << "* Destructors *" << std::endl << std::endl;

	delete bob;
	delete sindy;
	delete materiaSource;
}
