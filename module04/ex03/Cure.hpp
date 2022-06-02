/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:18:51 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/02 18:35:55 by plouvel          ###   ########.fr       */
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

		virtual AMateria *	clone(void) const;
		virtual void	use(ICharacter & target);

};

#endif // CURE_CLASS_H

