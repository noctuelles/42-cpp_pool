/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:34:07 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/04 15:32:54 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_CLASS_H
# define AFORM_CLASS_H
 
# include <string>

class	Bureaucrat;

class	AForm
{

	public:

		class GradeTooHighException : public std::exception
		{
			public:

				virtual const char *	what(void) const throw();

		};

		class GradeTooLowException : public std::exception
		{
			public:

				virtual const char *	what(void) const throw();

		};

		AForm(void);
		AForm(std::string const & name, unsigned int gradeRequiredToSign,
										unsigned int gradeRequiredToExecute);
		AForm(AForm const & src);
		~AForm(void);

		AForm &	operator=(AForm const & rhs);

		/* Accesors */

		std::string const &	getName(void) const;
		unsigned int		getGradeRequiredToSign(void) const;
		unsigned int		getGradeRequiredToExecute(void) const;

		bool				beSigned(Bureaucrat const & bureaucrat);
		virtual bool		execute(Bureaucrat const & executor) const = 0;

	private:

		std::string const	_name;
		bool				_isSigned;
		unsigned int const	_gradeRequiredToSign;
		unsigned int const	_gradeRequiredToExecute;

	protected:

		bool				_isSignableBy(Bureaucrat const & bureaucrat) const;
		bool				_isExecutableBy(Bureaucrat const & bureaucrat) const;

};

std::ostream &	operator<<(std::ostream & o, AForm const & rhs);

#endif // AFORM_CLASS_H

