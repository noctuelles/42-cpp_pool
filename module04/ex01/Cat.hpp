/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:15:52 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/01 20:16:36 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_H
# define CAT_CLASS_H

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{

	public:

		Cat(void);
		Cat(Cat const & src);
		~Cat(void);

		Cat &	operator=(Cat const & rhs);

		virtual void	makeSound(void);
		Brain *	getBrain(void);

	private:

		Brain *	_brain;
};

#endif // CAT_CLASS_H

