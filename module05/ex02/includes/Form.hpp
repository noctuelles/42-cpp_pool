/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:34:07 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/04 01:07:20 by plouvel          ###   ########.fr       */
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
		class AlreadySigned : public std::exception
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
		bool				getStatus(void) const;
		unsigned int		getGradeRequiredToSign(void) const;
		unsigned int		getGradeRequiredToExecute(void) const;

		/* Methods and functions */

		void				beSigned(Bureaucrat const & bureaucrat);
		bool				checkExecutionRequierement(Bureaucrat const & executor) const;
		virtual void		execute(Bureaucrat const & executor) const = 0;

	private:

		std::string const	_name;
		bool				_isSigned;
		unsigned int const	_gradeRequiredToSign;
		unsigned int const	_gradeRequiredToExecute;

};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);

#endif // FORM_CLASS_H

