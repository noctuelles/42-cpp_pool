/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 01:04:00 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/04 15:32:53 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_CLASS_H
# define PRESIDENTIALPARDONFORM_CLASS_H

#include "AForm.hpp"

class	PresidentialPardonForm : public AForm
{

	public:

		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const & target);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		~PresidentialPardonForm(void);

		PresidentialPardonForm &	operator=(PresidentialPardonForm const & rhs);

		bool		execute(Bureaucrat const & executor) const;

		static unsigned int const	gradeToSign = 25;
		static unsigned int const	gradeToExecute = 5;

	private:

		std::string	_target;

};

#endif // PRESIDENTIALPARDONFORM_CLASS_H

