
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

#include "Form.hpp"

class	RobotomyRequestForm : public Form
{

	public:

		RobotomyRequestForm(void);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		~RobotomyRequestForm(void);

		RobotomyRequestForm &	operator=(RobotomyRequestForm const & rhs);

		void		execute(Bureaucrat const & executor) const;

		static unsigned int const	gradeToSign = 72;
		static unsigned int const	gradeToExecute = 45;

	private:

		bool	_robotomyAlea;

};

#endif // ROBOTOMYREQUESTFORM_CLASS_H

