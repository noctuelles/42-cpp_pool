/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:18:51 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/03 11:38:00 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_H
# define CURE_CLASS_H

#include "AMateria.hpp"

class	Cure : public AMateria
{

	public:

		Cure(void);
		Cure(Cure const & src);
		~Cure(void);

		Cure &	operator=(Cure const & rhs);

		AMateria *	clone(void) const;
		void		use(ICharacter & target);

};

#endif // CURE_CLASS_H

