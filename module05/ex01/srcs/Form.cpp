/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:34:07 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/04 14:23:15 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

Form::Form() :	_name("Default Form"),
				_isSigned(false),
				_gradeRequiredToSign(30),
				_gradeRequiredToExecute(20)
{
	std::cout << "Form default constructor called." << std::endl;
}

Form::Form(std::string const & name, unsigned int gradeRequiredToSign,
										unsigned int gradeRequiredToExecute) :
								_name(name),
								_isSigned(false),
								_gradeRequiredToSign(gradeRequiredToSign),
								_gradeRequiredToExecute(gradeRequiredToExecute)
{
	 std::cout << "Form parametric constructor called." << std::endl;

	 if (gradeRequiredToSign < Bureaucrat::highestGrade)
		 throw (Form::GradeTooHighException());
	 else if (gradeRequiredToSign > Bureaucrat::lowestGrade)
		 throw (Form::GradeTooLowException());

	 if (gradeRequiredToExecute < Bureaucrat::highestGrade)
		 throw (Form::GradeTooHighException());
	 else if (gradeRequiredToExecute > Bureaucrat::lowestGrade)
		 throw (Form::GradeTooLowException());
}

Form::Form(Form const & src) :	_name(src._name),
								_isSigned(src._isSigned),
								_gradeRequiredToSign(src._gradeRequiredToSign),
								_gradeRequiredToExecute(src._gradeRequiredToExecute)
{
	 std::cout << "Form copy constructor called." << std::endl;
}

Form::~Form()
{
	std::cout << "Form destructor called." << std::endl;
}

Form &	Form::operator=(Form const & rhs)
{
	std::cout << "Form assignement overload called." << std::endl;
	this->_isSigned = rhs._isSigned;
	return (*this);
}

std::string const &	Form::getName(void) const
{
	return (this->_name);
}

unsigned int	Form::getGradeRequiredToSign(void) const
{
	return (this->_gradeRequiredToSign);
}

unsigned int	Form::getGradeRequiredToExecute(void) const
{
	return (this->_gradeRequiredToExecute);
}

bool	Form::_isSignableBy(Bureaucrat const & bureaucrat)
{
	if (this->_isSigned)
		return (false);
	if (bureaucrat.getGrade() > this->_gradeRequiredToSign)
	{
		throw (Form::GradeTooLowException());
		return (false);
	}
	return (true);
}

bool	Form::_isExecutableBy(Bureaucrat const & bureaucrat)
{
	if (!this->_isSigned)
		return (false);
	if (bureaucrat.getGrade() > this->_gradeRequiredToExecute)
	{
		throw (Form::GradeTooLowException());
		return (false);
	}
	return (true);
}

bool			Form::beSigned(const Bureaucrat & bureaucrat)
{
	if (this->_isSignableBy(bureaucrat))
		return (this->_isSigned = true);
	else
		return (false);
}

const char *	Form::GradeTooHighException::what() const throw() 
{
	return ("grade too high to create / sign form !");
}

const char *	Form::GradeTooLowException::what() const throw() 
{
	return ("grade too low to create / sign form !");
}

std::ostream &	operator<<(std::ostream & o, Form const & rhs)
{
	o << "Form : " << rhs.getName() << std::endl;;
	o << "Grade grade required to sign : " << rhs.getGradeRequiredToSign() << std::endl;
	o << "Grade grade required to execute : " << rhs.getGradeRequiredToSign() << std::endl;
	return (o);
}
