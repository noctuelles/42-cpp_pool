/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureaucratSymbols.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:01:56 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/04 00:10:50 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRATSYMBOLS_H
# define BUREAUCRATSYMBOLS_H

#include <string>

class	Bureaucrat
{
	public:

		std::string const &		getName(void) const;
		unsigned int			getGrade(void) const;

		static unsigned int const	highestGrade = 1;
		static unsigned int const	lowestGrade = 150;
};

#endif
