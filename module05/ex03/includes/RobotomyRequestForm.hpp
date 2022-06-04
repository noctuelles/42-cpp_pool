
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 00:48:16 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/04 00:48:16 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_CLASS_H
# define ROBOTOMYREQUESTFORM_CLASS_H

#include "AForm.hpp"
#include <string>

class	RobotomyRequestForm : public AForm
{

	public:

		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const & target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		~RobotomyRequestForm(void);

		RobotomyRequestForm &	operator=(RobotomyRequestForm const & rhs);

		bool		execute(Bureaucrat const & executor) const;

		static unsigned int const	gradeToSign = 72;
		static unsigned int const	gradeToExecute = 45;

	private:

		std::string	_target;

};

#endif // ROBOTOMYREQUESTFORM_CLASS_H

