/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:08:54 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/01 17:29:38 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_H
# define WRONGANIMAL_CLASS_H
 
#include <string>

class	WrongAnimal
{

	public:

		WrongAnimal(void);
		WrongAnimal(WrongAnimal const & src);
		virtual ~WrongAnimal(void);

		WrongAnimal &	operator=(WrongAnimal const & rhs);

		void	makeSound();

	protected:

		std::string	type;
};

#endif // WRONGANIMAL_CLASS_H
