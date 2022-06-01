/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:14:53 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/01 15:38:45 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_H
# define DOG_CLASS_H

#include "Animal.hpp"

class	Dog : public Animal
{

	public:

		Dog(void);
		Dog(Dog const & src);
		~Dog(void);

		Dog &	operator=(Dog const & rhs);

		virtual void	makeSound(void);
};

#endif // CAT_CLASS_H

