
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:28:25 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/02 10:28:25 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_H
# define ICE_CLASS_H

#include "AMateria.hpp"

class	Ice : public AMateria
{

	public:

		Ice(void);
		Ice(Ice const & src);
		~Ice(void);

		Ice &	operator=(Ice const & rhs);

		virtual AMateria *	clone(void) const;
		virtual void	use(ICharacter & target);

};

#endif // ICE_CLASS_H

