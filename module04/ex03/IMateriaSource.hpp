/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:24:25 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/02 19:03:24 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_CLASS_H
# define IMATERIASOURCE_CLASS_H

#include "AMateria.hpp"

class	IMateriaSource
{
	public:

		virtual	~IMateriaSource() {}
		virtual void		learnMateria(AMateria *) = 0;
		virtual AMateria*	createMateria(std::string const & type) = 0;

};
#endif // IMATERIASOURCE_CLASS_H
