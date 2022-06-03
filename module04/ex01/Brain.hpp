/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:08:49 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/03 11:12:31 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_H
# define BRAIN_CLASS_H

#include <string>

class	Brain
{

	public:

		Brain(void);
		Brain(Brain const & src);
		~Brain(void);

		Brain &	operator=(Brain const & rhs);

		std::string const &	getIdea(size_t i) const;
		void				setIdea(size_t i, std::string const & idea);

		static size_t const	nbrOfIdeas = 100;

	private:

		std::string _ideas[nbrOfIdeas];
};

#endif // BRAIN_CLASS_H

