
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 15:53:46 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/04 15:53:46 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CLASS_H
# define INTERN_CLASS_H

#include "AForm.hpp"

class	Intern
{

	public:

		Intern(void);
		Intern(Intern const & src);
		~Intern(void);

		Intern &	operator=(Intern const & rhs);

		AForm *		makeForm(std::string const & form_name,
								std::string const & target) const;

	private:

		typedef struct	e_formList
		{
			std::string const &	 formName;
			AForm * (*fnct)(std::string const &);
		}	formList;
};

#endif // INTERN_CLASS_H
