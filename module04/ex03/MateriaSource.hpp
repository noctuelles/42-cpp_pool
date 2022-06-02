/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:25:37 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/02 19:03:24 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS_H
# define MATERIASOURCE_CLASS_H

#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{

	public:

		MateriaSource(void);
		MateriaSource(MateriaSource const & src);
		~MateriaSource(void);

		MateriaSource &	operator=(MateriaSource const & rhs);

		void				learnMateria(AMateria *);
		AMateria*			createMateria(std::string const & type);

	private:

		AMateria	*_learnedMateria[4];

		void		_deleteLearnedMaterial(void);
};

#endif // MATERIASOURCE_CLASS_H
