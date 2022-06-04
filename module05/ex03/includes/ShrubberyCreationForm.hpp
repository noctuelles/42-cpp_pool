/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 22:43:31 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/04 16:39:00 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_CLASS_H
# define SHRUBBERYCREATIONFORM_CLASS_H

#include "AForm.hpp"

class	ShrubberyCreationForm : public AForm
{

	public:

		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const std::string & target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm &	operator=(ShrubberyCreationForm const & rhs);

		bool		execute(Bureaucrat const & executor) const;

		static unsigned int const	gradeToSign = 145;
		static unsigned int const	gradeToExecute = 137;

	private:

		std::string					_target;

		static std::string const	_shruberry_one;
		static std::string const	_shruberry_two;
		static std::string const	_shruberry_three;
};

#endif // SHRUBBERYCREATIONFORM_CLASS_H

