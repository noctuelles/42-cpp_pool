/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:34:07 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/04 16:55:53 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

AForm::AForm() :	_name("Default Form"),
				_isSigned(false),
				_gradeRequiredToSign(30),
				_gradeRequiredToExecute(20)
{
	std::cout << "AForm default constructor called." << std::endl;
}

AForm::AForm(std::string const & name, unsigned int gradeRequiredToSign,
										unsigned int gradeRequiredToExecute) :
								_name(name),
								_isSigned(false),
								_gradeRequiredToSign(gradeRequiredToSign),
								_gradeRequiredToExecute(gradeRequiredToExecute)
{
	 if (gradeRequiredToSign < Bureaucrat::highestGrade)
		 throw (AForm::GradeTooHighException());
	 else if (gradeRequiredToSign > Bureaucrat::lowestGrade)
		 throw (AForm::GradeTooLowException());

	 if (gradeRequiredToExecute < Bureaucrat::highestGrade)
		 throw (AForm::GradeTooHighException());
	 else if (gradeRequiredToExecute > Bureaucrat::lowestGrade)
		 throw (AForm::GradeTooLowException());
}

AForm::AForm(AForm const & src) :	_name(src._name),
								_isSigned(src._isSigned),
								_gradeRequiredToSign(src._gradeRequiredToSign),
								_gradeRequiredToExecute(src._gradeRequiredToExecute)
{
	 std::cout << "AForm copy constructor called." << std::endl;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called." << std::endl;
}

AForm &	AForm::operator=(AForm const & rhs)
{
	std::cout << "AForm assignement overload called." << std::endl;
	this->_isSigned = rhs._isSigned;
	return (*this);
}

std::string const &	AForm::getName(void) const
{
	return (this->_name);
}

unsigned int	AForm::getGradeRequiredToSign(void) const
{
	return (this->_gradeRequiredToSign);
}

unsigned int	AForm::getGradeRequiredToExecute(void) const
{
	return (this->_gradeRequiredToExecute);
}

bool	AForm::_isSignableBy(Bureaucrat const & bureaucrat) const
{
	if (this->_isSigned)
		return (false);
	if (bureaucrat.getGrade() > this->_gradeRequiredToSign)
	{
		throw (AForm::GradeTooLowException());
		return (false);
	}
	return (true);
}

bool	AForm::_isExecutableBy(Bureaucrat const & bureaucrat) const
{
	if (!this->_isSigned)
		return (false);
	if (bureaucrat.getGrade() > this->_gradeRequiredToExecute)
	{
		throw (AForm::GradeTooLowException());
		return (false);
	}
	return (true);
}

bool			AForm::beSigned(const Bureaucrat & bureaucrat)
{
	if (this->_isSignableBy(bureaucrat))
		return (this->_isSigned = true);
	else
		return (false);
}

const char *	AForm::GradeTooHighException::what() const throw() 
{
	return ("grade too high to create / sign form !");
}

const char *	AForm::GradeTooLowException::what() const throw() 
{
	return ("grade too low to create / sign form !");
}

std::ostream &	operator<<(std::ostream & o, AForm const & rhs)
{
	o << "Form : " << rhs.getName() << std::endl;;
	o << "Grade grade required to sign : " << rhs.getGradeRequiredToSign() << std::endl;
	o << "Grade grade required to execute : " << rhs.getGradeRequiredToExecute() << std::endl;
	return (o);
}
