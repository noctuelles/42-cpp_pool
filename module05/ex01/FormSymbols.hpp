/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FormSymbols.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:03:54 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/03 17:23:43 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORMSYMBOLS_H
# define FORMSYMBOLS_H

#include <string>

class	Bureaucrat;

class	Form
{

	public:

		class GradeTooLowException : public std::exception
		{
			public:

				virtual const char *	what(void) const throw();

		};
		class AlreadySigned : public std::exception
		{
			public:

				virtual const char *	what(void) const throw();

		};

		std::string const &	getName(void) const;
		void				beSigned(Bureaucrat const & bureaucrat);
};

#endif