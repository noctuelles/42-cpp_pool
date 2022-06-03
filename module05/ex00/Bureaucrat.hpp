/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:37:51 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/03 15:31:39 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_H
# define BUREAUCRAT_CLASS_H

#include <string>

class	Bureaucrat
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

		Bureaucrat(void);
		Bureaucrat(std::string const & name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);

		Bureaucrat &	operator=(Bureaucrat const & rhs);

		std::string const &		getName(void) const;
		unsigned int			getGrade(void) const;

		void	incrementGrade(void);
		void	decrementGrade(void);

		static unsigned int const	highestGrade = 1;
		static unsigned int const	lowestGrade = 150;

	private:

		std::string const	_name;
		int					_grade;

};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif // BUREAUCRAT_CLASS_H

