/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 22:43:31 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/04 01:07:22 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_CLASS_H
# define SHRUBBERYCREATIONFORM_CLASS_H

#include "Form.hpp"

class	ShrubberyCreationForm : public Form
{

	public:

		ShrubberyCreationForm(void);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm &	operator=(ShrubberyCreationForm const & rhs);

		void		execute(Bureaucrat const & executor) const;

		static unsigned int const	gradeToSign = 145;
		static unsigned int const	gradeToExecute = 137;

	private:

		static std::string const shruberry_one;
		static std::string const shruberry_two;

};

#endif // SHRUBBERYCREATIONFORM_CLASS_H

