/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:08:54 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/01 19:10:11 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_H
# define ANIMAL_CLASS_H
 
#include <string>

class	Animal
{

	public:

		Animal(void);
		Animal(Animal const & src);
		virtual ~Animal(void);

		Animal &	operator=(Animal const & rhs);

		virtual void	makeSound();

	protected:

		std::string	_type;
};

#endif // ANIMAL_CLASS_H
