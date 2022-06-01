/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:14:53 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/01 20:08:28 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_H
# define DOG_CLASS_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class	Dog : public AAnimal
{

	public:

		Dog(void);
		Dog(Dog const & src);
		~Dog(void);

		Dog &	operator=(Dog const & rhs);

		void	makeSound(void);

	private:

		Brain *	_brain;
};

#endif // CAT_CLASS_H

