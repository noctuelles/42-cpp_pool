/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:10:55 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/02 17:09:11 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_H
# define AMATERIA_CLASS_H

#include "ICharacter.hpp"
#include <string>

class	AMateria
{
	public:

		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		virtual ~AMateria(void) {};

		AMateria &	operator=(AMateria const & rhs);

		std::string const &	getType() const;
		virtual	AMateria *	clone(void) const = 0;
		virtual void		use(ICharacter & target);

		void				setOwner(std::string const & owner);
		void				freeMateria(void);
		bool				isEquipped(void) const;
		std::string const &	getOwner(void) const;

	protected:

		std::string	_type;

		bool		_isEquipped;
		std::string	_owner;
};

#endif // AMATERIA_CLASS_H

