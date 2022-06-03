/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:08:54 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/03 11:32:41 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_CLASS_H
# define AANIMAL_CLASS_H
 
#include <string>

class	AAnimal
{
	public:

		AAnimal(void);
		virtual ~AAnimal(void) {};

		virtual void	makeSound(void) = 0;

	protected:

		std::string	_type;
};

#endif // AANIMAL_CLASS_H
