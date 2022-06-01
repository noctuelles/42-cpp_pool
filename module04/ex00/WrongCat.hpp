/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:15:52 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/01 17:28:42 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_H
# define WRONGCAT_CLASS_H

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{

	public:

		WrongCat(void);
		WrongCat(WrongCat const & src);
		~WrongCat(void);

		WrongCat &	operator=(WrongCat const & rhs);

		void	makeSound(void);
};

#endif // WRONGCAT_CLASS_H

