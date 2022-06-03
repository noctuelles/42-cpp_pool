/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureaucratSymbols.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:01:56 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/03 17:07:01 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRATSYMBOLS_H
# define BUREAUCRATSYMBOLS_H

class	Bureaucrat
{
	public:

		unsigned int			getGrade(void) const;

		static unsigned int const	highestGrade = 1;
		static unsigned int const	lowestGrade = 150;
};

#endif
