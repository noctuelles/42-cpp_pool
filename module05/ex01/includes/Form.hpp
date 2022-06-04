/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:34:07 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/04 14:23:15 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_H
# define FORM_CLASS_H
 
# include <string>

class	Bureaucrat;

class	Form
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

		Form(void);
		Form(std::string const & name, unsigned int gradeRequiredToSign,
										unsigned int gradeRequiredToExecute);
		Form(Form const & src);
		~Form(void);

		Form &	operator=(Form const & rhs);

		/* Accesors */

		std::string const &	getName(void) const;
		unsigned int		getGradeRequiredToSign(void) const;
		unsigned int		getGradeRequiredToExecute(void) const;

		bool				beSigned(Bureaucrat const & bureaucrat);

	private:

		std::string const	_name;
		bool				_isSigned;
		unsigned int const	_gradeRequiredToSign;
		unsigned int const	_gradeRequiredToExecute;

		bool				_isSignableBy(Bureaucrat const & bureaucrat);
		bool				_isExecutableBy(Bureaucrat const & bureaucrat);

};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);

#endif // FORM_CLASS_H

